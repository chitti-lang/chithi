#pragma once
#include "common.h"

typedef struct {
	uint32_t line;
	uint32_t col;
} LineMap;

typedef struct {
	const char *file_name;
	const char *file_buffer;
	LineMap line_map;
} SourceMap;

void source_map_init(SourceMap* map, const char *file_name, const char *file_buffer);
