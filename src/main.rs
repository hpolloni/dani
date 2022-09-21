mod plugin;

use std::fs;
use std::process::exit;
use toml;
use env_logger::{Env, Builder};
use expanduser::expanduser;
use log::debug;
use plugin::Plugin;
use rustyline::Editor;
use rustyline::error::ReadlineError;

use crate::plugin::NullPlugin;
use crate::plugin::RdsDataPlugin;

const VERSION: &str = env!("CARGO_PKG_VERSION");

fn show_welcome_msg() {
    println!("DANI v{}", VERSION);
    println!("Enter .help for a list of available commands");
}

fn show_help() {
    println!(".help              Shows this help information.");
    println!(".quit              Quits the application.");
    println!(".profile <PROFILE> Choose a new profile to use.");
}

fn initialize_logger() {
    let env = Env::new().filter("DANI_LOG");

    let mut builder = Builder::new();
    builder.parse_env(env);
    builder.init();
}

fn handle_command(current_plugin: Box<dyn Plugin>, line: String) -> Box<dyn Plugin> {
    if line == ".help" {
        show_help();
    }

    if line == ".quit" {
        exit(0);
    }

    return current_plugin;
}

fn load_plugin(profile: &str) -> Box<dyn Plugin> {
    debug!("Loading profile.");
    let path = expanduser("~/.dani").unwrap();
    if !path.exists() {
        eprintln!("~/.dani not found. Defaulting to no settings.");
        return Box::new(NullPlugin{});
    }
    let contents = match fs::read_to_string(path) {
        Ok(c) => c,
        Err(_) => {eprintln!("Failed to read ~/.dani file"); exit(1);}
    };
    let value: toml::Value = match toml::from_str(&contents) {
        Ok(v) => v,
        Err(_) => {eprintln!("Failed to parse ~/.dani file"); exit(2); }
    };

    if !&value.as_table().unwrap().contains_key(profile) {
        eprintln!("Profile {} not found in ~/.dani file. Defaulting to no settings.", profile);
        return Box::new(NullPlugin{});
    }

    // TODO: Unwrap everywhere :(
    let settings = value.as_table().unwrap()[profile].as_table().unwrap();
    let cluster_arn = settings["cluster_arn"].as_str().unwrap();
    let secret_arn = settings["secret_arn"].as_str().unwrap();
    let database = settings["database"].as_str().unwrap();
    let awsprofile = settings["awsprofile"].as_str().unwrap();

    return Box::new(RdsDataPlugin::new(cluster_arn, secret_arn, database, awsprofile));
}

fn main() {
    initialize_logger();
    let default_prompt = ">> ";
    let mut prompt = default_prompt;
    show_welcome_msg();
    let mut rl = Editor::<()>::new().unwrap();

    let mut current_plugin = load_plugin("default");
    let mut buffer = vec![];

    loop {
        let result_line = rl.readline(prompt);
        match result_line {
            Ok(line) => {
                rl.add_history_entry(line.as_str());

                if !line.is_empty() && line.starts_with(".") {
                    current_plugin = handle_command(current_plugin, line);
                } else if line.is_empty() || line.ends_with(";") {
                    buffer.push(line);
                    debug!("Executing: {}", buffer.join("\n"));
                    println!("{}", current_plugin.execute(&buffer.join("\n")));

                    buffer = vec![];
                    prompt = default_prompt;
                } else {
                    buffer.push(line);
                    prompt = "|  "; 
                }
                
            },
            Err(ReadlineError::Interrupted) | Err(ReadlineError::Eof) => {
                debug!("Interrupted!");
                break;
            },
            Err(err) => {
                println!("Unexpected error while reading input: {:?}", err);
                break;
            }
        }
    }
}

