#include <stdio.h>
#include "chithi/common.h"
#include "chithi/compiler.h"
#include "chithi/source_map.h"
#include "chithi/lexer.h"

void compile(const char *file_name, const char *buffer) {
	SourceMap map;
	source_map_init(&map, file_name, buffer);

	Lexer lexer;
	lexer_init(&lexer, &map);

	printf("Chithi version %s\n", CHITHI_VERSION);
	printf("%s\n", buffer);
}
