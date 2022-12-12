use env_logger::{Builder, Env};
use log::debug;
use rustyline::error::ReadlineError;
use rustyline::hint::HistoryHinter;
use sqlx::{sqlite::SqliteRow, Column, Connection, Row, SqliteConnection};
use std::borrow::Cow::{self, Borrowed, Owned};
use std::{fmt::Display, process::exit};

use rustyline::highlight::{Highlighter, MatchingBracketHighlighter};
use rustyline::{CompletionType, Config, EditMode, Editor};
use rustyline_derive::{Completer, Helper, Hinter, Validator};

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

impl From<Vec<SqliteRow>> for ResultSet {
    fn from(rows: Vec<SqliteRow>) -> Self {
        if rows.is_empty() {
            return Self::default();
        }
        let result_set_rows = rows
            .iter()
            .map(|sql_row| {
                let mut row = vec![];
                for i in 0..sql_row.columns().len() {
                    row.push(sql_row.get(i));
                }
                row
            })
            .collect();

        Self {
            headers: rows[0]
                .columns()
                .iter()
                .map(|col| col.name().to_owned())
                .collect(),
            rows: result_set_rows,
        }
    }
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

#[derive(Helper, Completer, Hinter, Validator)]
struct LineHelper {
    highlighter: MatchingBracketHighlighter,
    #[rustyline(Hinter)]
    hinter: HistoryHinter,
    colored_prompt: String,
}

impl LineHelper {
    const KEYWORDS : [&str; 6] = ["SELECT", "FROM", "WHERE", "select", "from", "where"];
}

impl Highlighter for LineHelper {

    fn highlight_prompt<'b, 's: 'b, 'p: 'b>(
        &'s self,
        prompt: &'p str,
        default: bool,
    ) -> Cow<'b, str> {
        if default {
            Borrowed(&self.colored_prompt)
        } else {
            Borrowed(prompt)
        }
    }

    fn highlight_hint<'h>(&self, hint: &'h str) -> Cow<'h, str> {
        Owned("\x1b[2m".to_owned() + hint + "\x1b[m")
    }

    fn highlight<'l>(&self, line: &'l str, _pos : usize) -> Cow<'l, str> {
        let mut lighted = line.to_owned();
        for keyword in LineHelper::KEYWORDS {
            lighted = lighted.replace(keyword, &format!("\x1b[1;34m{keyword}\x1b[0m"));
        }

        Owned(lighted)
    }

    fn highlight_char(&self, line: &str, pos: usize) -> bool {
        self.highlighter.highlight_char(line, pos)
    }
}

#[tokio::main]
async fn main() -> Result<(), Box<dyn std::error::Error>> {
    let default_prompt = ">>> ";
    let mut prompt = default_prompt;
    initialize_logger();
    show_welcome_msg();

    let h = LineHelper {
        highlighter: MatchingBracketHighlighter::new(),
        hinter: HistoryHinter {},
        colored_prompt: "".to_owned(),
    };

    let mut rl = Editor::new()?;
    rl.set_helper(Some(h));
    if rl.load_history("history.txt").is_err() {
        println!("No previous history.");
    }
    let mut buffer = vec![];

    let mut conn = SqliteConnection::connect("sqlite::memory:").await?;
    loop {
        rl.helper_mut().expect("No helper").colored_prompt = format!("\x1b[1;32m{prompt}\x1b[0m");
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

                    // TODO: sqlx permits streaming result sets. So we could do
                    // asynchronous fetching of results
                    let rows = sqlx::query(&query).fetch_all(&mut conn).await;
                    if let Ok(rows) = rows {
                        let result_set = ResultSet::from(rows);

                        println!("{}", result_set);

                        println!("executed successfully. ");
                    }

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
