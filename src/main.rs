use env_logger::{Builder, Env};
use log::debug;
use rustyline::{error::ReadlineError, Editor};
use rustyline::hint::HistoryHinter;
use std::{fmt::Display, process::exit};

const VERSION: &str = env!("CARGO_PKG_VERSION");

fn show_welcome_msg() {
    println!("DANI v{}", VERSION);
    println!("Enter .help for a list of available commands");
}

fn show_help() {
    println!(".help              Shows this help information.");
    println!(".quit              Quits the application.");
}

fn initialize_logger() {
    let env = Env::new().filter("DANI_LOG");

    let mut builder = Builder::new();
    builder.parse_env(env);
    builder.init();
}

fn handle_command(line: String) {
    if line == ".help" {
        show_help();
    }

    if line == ".quit" {
        exit(0);
    }
}

#[derive(Default)]
struct ResultSet {
    headers: Vec<String>,
    rows: Vec<Vec<String>>,
}

impl Display for ResultSet {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        let mut builder = tabled::builder::Builder::default();

        builder.set_columns(&self.headers);
        for row in self.rows.iter() {
            builder.add_record(row);
        }

        let table = builder.build().with(tabled::Style::psql());

        write!(f, "{}", table)
    }
}

#[tokio::main]
async fn main() -> Result<(), Box<dyn std::error::Error>> {
    let default_prompt = ">>> ";
    let mut prompt = default_prompt;
    initialize_logger();
    show_welcome_msg();

    let mut rl = Editor::<()>::new()?;
    if rl.load_history("history.txt").is_err() {
        println!("No previous history.");
    }
    let mut buffer = vec![];

    loop {
        //rl.helper_mut().expect("No helper").colored_prompt = format!("\x1b[1;32m{prompt}\x1b[0m");
        let result_line = rl.readline(prompt);
        match result_line {
            Ok(line) => {
                rl.add_history_entry(line.as_str());

                if !line.is_empty() && line.starts_with(".") {
                    handle_command(line);
                } else if line.is_empty() || line.ends_with(";") {
                    buffer.push(line);
                    let query = buffer.join("\n");
                    debug!("Executing: {}", query);
/*
                    // TODO: sqlx permits streaming result sets. So we could do
                    // asynchronous fetching of results
                    let rows = sqlx::query(&query).fetch_all(&mut conn).await;
                    if let Ok(rows) = rows {
                        let result_set = ResultSet::from(rows);

                        println!("{}", result_set);

                        println!("executed successfully. ");
                    }
*/
                    buffer = vec![];
                    prompt = default_prompt;
                } else {
                    buffer.push(line);
                    prompt = "|  ";
                }
            }
            Err(ReadlineError::Interrupted) | Err(ReadlineError::Eof) => {
                debug!("Interrupted!");
                break;
            }
            Err(err) => {
                println!("Unexpected error while reading input: {:?}", err);
                break;
            }
        }
    }
    rl.append_history("history.txt")?;
    Ok(())
}
