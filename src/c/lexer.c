#include "chithi/lexer.h"

void lexer_init(Lexer *lexer, SourceMap *map){
	lexer->map = map;
	lexer->tokens = NULL;
}
