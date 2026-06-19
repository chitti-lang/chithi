fn main() {
    println!("cargo:rerun-if-changed=src/c/");
    cc::Build::new()
        .include("include")
        .file("src/c/compiler.c")
        .file("src/c/lexer.c")
        .file("src/c/source_map.c")
        .file("src/c/token.c")
        .file("src/c/memory.c")
        .compile("chithi");
}
