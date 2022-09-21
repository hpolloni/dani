use aws_sdk_rdsdata::{Client, output::ExecuteStatementOutput, model::Field};
use log::debug;

pub enum StatementResult {
    NotAResult,
    QueryResult(Vec<String>, Vec<Vec<String>>)
}

impl std::fmt::Display for StatementResult {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::NotAResult => write!(f, "Not a result"),
            Self::QueryResult(headers, rows) => tabulate(f, headers, rows)
        }
    }
}

fn tabulate(f: &mut std::fmt::Formatter, headers: &[String], rows: &[Vec<String>]) -> std::fmt::Result {
    let mut builder = tabled::builder::Builder::default();
    
    builder.set_columns(headers);
    for row in rows {
        builder.add_record(row);
    }
    
    let table = builder.build().with(tabled::Style::psql());

    write!(f, "{}", table)
}

pub trait Plugin {
    fn execute(&self, sql: &str) -> StatementResult;
}

pub struct NullPlugin;

impl Plugin for NullPlugin {
    fn execute(&self, _: &str) -> StatementResult {
        StatementResult::NotAResult
    }
}

pub struct RdsDataPlugin {
    cluster_arn: String,
    secret_arn: String,
    database: String,
    client: Client
}

impl RdsDataPlugin {
    
    #[tokio::main]
    pub async fn new(cluster_arn: &str, secret_arn: &str, database: &str, awsprofile: &str) -> Self {
        debug!("New RDS Data plugin created with cluster={} secret={} database={} and profile={}", 
            cluster_arn, secret_arn, database, awsprofile);
        std::env::set_var("AWS_PROFILE", awsprofile);

        let config = aws_config::from_env().region("us-west-2").load().await;
        let client = Client::new(&config);

        Self {
            cluster_arn: cluster_arn.to_string(),
            secret_arn: secret_arn.to_string(),
            database: database.to_string(),
            client: client.to_owned()
        }
    }

    #[tokio::main]
    pub async fn execute_statement(&self, sql: &str) -> ExecuteStatementOutput {
        let request = self.client
                .execute_statement()
                .resource_arn(&self.cluster_arn)
                .secret_arn(&self.secret_arn)
                .database(&self.database)
                .include_result_metadata(true)
                .sql(sql);
        request.send().await.unwrap() // This can definitely fail
    }

    
}

fn extract_rows(response: &ExecuteStatementOutput) -> Vec<Vec<String>> {
    match response.records() {
        Some(records) => {
            records.into_iter().map(|fields| {
                fields.into_iter().map(|field| {
                    match field {
                        Field::LongValue(l) => l.to_string(),
                        Field::BooleanValue(b) => b.to_string(),
                        Field::DoubleValue(d) => d.to_string(),
                        Field::StringValue(s) => s.to_owned(),
                        Field::IsNull(true) => "NULL".to_string(),
                        _ => todo!()
                    }
                }).collect()
            }).collect()
        }
        None => vec!(),
    }
}

fn extract_headers(response: &ExecuteStatementOutput) -> Vec<String> {
    match response.column_metadata() {
        Some(columns) => {
            columns.into_iter().map(|col| { col.name().or(Some("")).unwrap().to_string() }).collect()
        }
        None => vec!(),
    }
}

impl Plugin for RdsDataPlugin {
    fn execute(&self, sql: &str) -> StatementResult {
        debug!("Executing {} on RDS Data with {}, {} and {}", sql, self.cluster_arn, self.secret_arn, self.database);
        
        let response = self.execute_statement(sql);
        
        let headers = extract_headers(&response);
        let rows = extract_rows(&response);
        
        StatementResult::QueryResult(headers, rows)
    }

    
}