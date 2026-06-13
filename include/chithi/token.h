#pragma once
#include "span.h"
#include <stdint.h>

typedef enum {
	// Language keywords
	TK_LET, TK_LOOP, TK_IF, TK_ELIF, TK_ELSE, TK_OR, TK_AND, TK_RETURN, TK_SAY, TK_BREAK, TK_DEFINE,
	
	// Symbols
	TK_EQUALS, TK_DOUBLE_EQUALS, TK_DOT, TK_DOT_DOT, TK_LEFT_BRACE, TK_RIGHT_BRACE, TK_LEFT_BRACKET,
	TK_RIGHT_BRACKET, TK_PLUS, TK_MINUS, TK_DIVIDE, TK_PERCENTAGE, TK_GRATERTHAN, TK_GREATERTHAN_EQUAL, TK_LESSTHAN, TK_LESSTHAN_EQUAL,

	// Litreals
	TK_IDENTIFIER, TK_STRING_LITREAL, TK_DIGIT_LITREAL, TK_VOID_LITREAL, TK_OBJECT_LITREAL, TK_FALSE, TK_TRUE,
	
	TK_EOF
}TokenType;

typedef struct Token{
    TokenType type;
    Span span;
	char* lexeme; // Remove later
	// int sym; array/hashmap: index/key
	// array: lexeme	// O(n)
	// hashmap: lexeme	// O(1)
	union litreal {
		uint64_t i64;
		double d;
	}as;
} Token;

void tokenInfo();
