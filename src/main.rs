mod ffi;

use ffi::Compiler;

fn main() {
    let compiler = Compiler::new();
    compiler.run();
}
