#include "aux.h"

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int* read_array(int size, FILE* input_src) {
    int* array = (int*) malloc(size * sizeof(int));
    validate_alloc(array);

    for (int i = 0; i < size; i++) {
        fscanf(input_src, "%d", &array[i]);
    }

    return array;
}

void print_array(int* array, int size, FILE* output_dst) {
    for (int i = 0; i < size; i++)
        fprintf(output_dst, "%d\n", array[i]);
}

bool is_sorted(int* array, int size) {
    for (int i = 0; i < size - 1; i++) {
        if (array[i] > array[i+1])
            return false;
    }

    return true;
}

bool string_equal(char* s1, char* s2) {
    return strcmp(s1, s2) == 0;
}

void print_text_file(char* path) {
    FILE* text_file = fopen(path, "r");
    if (text_file == NULL) {
        fprintf(stderr, "ERROR: could not load %s.\n", path);
        exit(EXIT_FAILURE);
    }

    char buffer[1024];
    while(fgets(buffer, sizeof(buffer), text_file))
        printf("%s", buffer);

    fclose(text_file);
}

void validate_alloc(void* ptr) {
    if (ptr == NULL) {
        fprintf(stderr, "ERROR: memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
}

int find_range(int* array, int size) {
    int min = array[0];
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min)
            min = array[i];

        if (array[i]> max)
            max = array[i];
    }

    if (min < 0) {
        fprintf(stderr, "ERROR: sort by buckets doesn't support negative numbers.\n");
        exit(EXIT_FAILURE);
    }

    return max - min;
}
