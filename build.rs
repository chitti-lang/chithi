fn main() {
    println!("cargo:rerun-if-changed=src/c/");
    cc::Build::new()
        .include("include")
        .file("src/c/main.c")
        .compile("chithi");
}
