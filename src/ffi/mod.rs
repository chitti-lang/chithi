unsafe extern "C" {
    pub fn compile();
}

pub struct Compiler;

impl Compiler {

    pub fn new() -> Self {
        Self
    }

    pub fn run(&self) {
        unsafe {
            compile();
        }
    }
}

