#pragma once
#include "source_map.h"
#include "token.h"

typedef struct {
	SourceMap* map;
	Token* tokens;
	const char* start;
	const char* current;
} Lexer;

void lexer_init(Lexer *lexer, SourceMap *map);
