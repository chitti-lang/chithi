#include "chithi/memory.h"
#include <stdio.h>

void *reallocate(void *pointer, size_t size){
    if(size == 0){
        free(pointer);
    }

    void *result = realloc(pointer, size);
    if(result == NULL){
        fprintf(stderr, "realloc cannot be done");
        exit(1);
    }

    return result;
}
