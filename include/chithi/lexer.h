#pragma once
#include "source_map.h"

typedef struct {
	SourceMap* map;
} Lexer;

void init_lexer(Lexer *lexer);

