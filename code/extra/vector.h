#pragma once

#include <stddef.h>

typedef struct vector Vector;
struct vector {
    int* data;
    size_t size;
    size_t limit;
};

Vector* vector_new(int initial_limit);
void vector_push(Vector* vector, const int value);
void vector_free(Vector** ref_vector);
