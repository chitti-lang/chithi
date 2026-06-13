#include <stdio.h>
#include "chithi/common.h"
#include "chithi/compiler.h"
#include "chithi/source_map.h"

void compile(const char *file_name, const char *buffer) {
	SourceMap* map;
	init_source_map(map);
	printf("Chithi version %s\n", CHITHI_VERSION);
	printf("%s\n", buffer);
}
