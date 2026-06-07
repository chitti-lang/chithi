use std::ffi::CString;
use std::os::raw::c_char;

unsafe extern "C" {
    pub fn compile(file_name: *const c_char, buffer: *const c_char);
}

pub struct Compiler;

impl Compiler {

    pub fn new() -> Self {
        Self
    }

    pub fn run(&self, file_name: &str, buffer: &str) {
        let cfile_name = CString::new(file_name).expect("CString::new failed");
        let cbuffer = CString::new(buffer).expect("CString::new failed");
        unsafe {
            compile(cfile_name.as_ptr(), cbuffer.as_ptr());
        }
    }
}

