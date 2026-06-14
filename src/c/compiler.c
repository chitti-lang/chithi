#include <stdio.h>
#include "chithi/common.h"
#include "chithi/compiler.h"
#include "chithi/source_map.h"
#include "chithi/lexer.h"

void compile(const char *file_name, const char *buffer) {
	SourceMap map;
	init_source_map(&map, file_name, buffer);

	Lexer lexer;
	init_lexer(&lexer, &map);

	printf("Chithi version %s\n", CHITHI_VERSION);
	printf("%s\n", buffer);
}
