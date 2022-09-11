use aws_sdk_rdsdata::Client;
use log::debug;

pub enum StatementResult {
    NotAResult,
}

impl std::fmt::Display for StatementResult {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "Not a result. This is most likely a problem")
    }
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
    
    pub fn new(cluster_arn: &str, secret_arn: &str, database: &str, awsprofile: &str) -> Self {
        debug!("New RDS Data plugin created with cluster={} secret={} database={} and profile={}", 
            cluster_arn, secret_arn, database, awsprofile);
        std::env::set_var("AWS_PROFILE", awsprofile);

        // FIXME: hardcoded region
        let (tx, rx) = channel::bounded(1);
        handle.spawn(async move {
            let config = aws_config::from_env().region("us-west-2").load().await;
            let _ = tx.send(score_res);
        });
        let config = rx.recv();

        let client = Client::new(&config);

        Self {
            cluster_arn: cluster_arn.to_string(),
            secret_arn: secret_arn.to_string(),
            database: database.to_string(),
            client: client.to_owned()
        }
    }
}

impl Plugin for RdsDataPlugin {
    fn execute(&self, sql: &str) -> StatementResult {
        debug!("Executing {} on RDS Data with {}, {} and {}", sql, self.cluster_arn, self.secret_arn, self.database);
        
        StatementResult::NotAResult
    }
}