#include "vector.h"

#include <stdlib.h>

// WARNING: NEVER pass initial_limit as 0
Vector* vector_new(const int initial_limit) {
    Vector* new_vector = (Vector*) malloc(sizeof(Vector));
    new_vector->size = 0;
    new_vector->limit = initial_limit;
    new_vector->data = (int*) malloc(initial_limit * sizeof(int));

    return new_vector;
}

static void vector_expand(Vector* vector) {
    int new_limit = vector->limit * 2;
    vector->data = (int*) realloc(vector->data, new_limit * sizeof(int));
    vector->limit = new_limit;
}

void vector_push(Vector* vector, const int value) {
    if (vector->size < vector->limit) {
        vector->data[vector->size++] = value;
        return;
    }
    else {
        vector_expand(vector);
        vector->data[vector->size++] = value;
        return;
    }
}

void vector_free(Vector** ref_vector) {
    free((*ref_vector)->data);
    free(*ref_vector);
    *ref_vector = NULL;
}
