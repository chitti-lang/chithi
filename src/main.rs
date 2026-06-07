mod ffi;

use ffi::Compiler;
use std::fs;

fn main() -> std::io::Result<()> {
    run_file("test/test.cth")?;
    Ok(())
}

fn run_file(path: &str) -> std::io::Result<()> {
    let compiler = Compiler::new();
    let contents = fs::read_to_string(path)?;
    compiler.run(path, contents.as_str());
    Ok(())
}
