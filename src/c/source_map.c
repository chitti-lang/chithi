#include "chithi/source_map.h"

static void line_map_init(LineMap line_map){
    line_map.line = 0;
    line_map.col = 0;
}

void source_map_init(SourceMap* map, const char *file_name, const char *file_buffer){
    map->file_name = file_name;
    map->file_buffer = file_buffer;
    line_map_init(map->line_map);
}
