#include "chithi/lexer.h"

void init_lexer(Lexer *lexer, SourceMap *map){
	lexer->map = map;
}   