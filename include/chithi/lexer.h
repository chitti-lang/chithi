#pragma once
#include "source_map.h"

typedef struct {
	SourceMap* map;
} Lexer;

void init_lexer(Lexer *lexer, const char *file_name, const char *file_buffer );

