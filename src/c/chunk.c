#include <stdlib.h>
#include "chithi/chunk.h"
#include "chithi/memory.h"

void intChunk(Chunk *chunk){
    chunk->capacity = 0;
    chunk->count = 0;
    chunk->code = NULL;

}

void writeChunk(Chunk *chunk, uint8_t byte){
    if(chunk->capacity < chunk->count +1 ){
        int oldCapacity = chunk->capacity;
        chunk->capacity = GROW_CAPACITY(oldCapacity);
        chunk->code = GROW_ARRAY(uint8_t, chunk->code, oldCapacity, chunk->capacity);

    }

    chunk->code[chunk->count] = byte;
    chunk->count++;

}
