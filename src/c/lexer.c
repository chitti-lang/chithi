#include "chithi/lexer.h"
#include <stdio.h>

void init_lexer(Lexer *lexer, const char *file_name, const char *file_buffer){
    init_source_map(&lexer->map, file_name, file_buffer);
    printf("LEXERRR HELLLOO!");
}   