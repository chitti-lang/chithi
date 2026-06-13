#include <stdio.h>
#include "chithi/common.h"
#include "chithi/compiler.h"
#include "chithi/source_map.h"
#include "chithi/lexer.h"

void compile(const char *file_name, const char *buffer) {
	Lexer lexer;
	init_lexer(&lexer, file_name, buffer);
	printf("Chithi version %s\n", CHITHI_VERSION);
	printf("%s\n", buffer);
}
