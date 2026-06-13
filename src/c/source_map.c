#include "chithi/source_map.h"

static void init_line_map(LineMap *line_map){
    line_map->line = 0;
    line_map->col = 0;
}

void init_source_map(SourceMap* map, const char *file_name, const char *file_buffer){
    map->file_name = file_name;
    map->file_buffer = file_buffer;
    LineMap line_map;
    init_line_map(&line_map);
}