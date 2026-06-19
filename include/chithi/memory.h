#pragma once
#include "common.h"
#include <stdlib.h>


#define GROW_CAPACITY(capacity) \
 ((capacity) < 8 ? 8 : (capacity) * 2)

#define GROW_ARRAY(type, pointer, new_size) \
    ( type* ) reallocate (pointer, sizeof(type)*new_size)

void *reallocate(void *pointer, size_t size);
