#include "sort.h"

/*
 * sorts the arrray with specified algorithm and returns time taken in seconds.
 */
double sort(int* array, int size, char* alg) {
    clock_t start = clock();

    if (string_equal(alg, "bogo")) {
        srand(time(NULL));
        int atempts = bogo_sort(array, size);
        printf("atempts: %d\n", atempts);
    }
    else if (string_equal(alg, "bubble"))
        bubble_sort(array, size);
    else if (string_equal(alg, "cocktail"))
        cocktail_sort(array, size);
    else if (string_equal(alg, "selection"))
        selection_sort(array, size);
    else if (string_equal(alg, "insertion"))
        insertion_sort(array, size);
    else if (string_equal(alg, "shell"))
        shell_sort(array, size);
    else if (string_equal(alg, "quick"))
        quick_sort(array, 0, size - 1);
    else if (string_equal(alg, "merge"))
        merge_sort(array, 0, size - 1);
    else if (string_equal(alg, "heap"))
        heap_sort(array, size);
    else if (string_equal(alg, "counting"))
        counting_sort(array, size);
    else {
        fprintf(stderr, "ERROR: invalid algorithm: %s\n", alg);
        exit(EXIT_FAILURE);
    }

    clock_t end = clock();

    return (double) (end - start) / CLOCKS_PER_SEC;
}
