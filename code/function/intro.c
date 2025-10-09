#include "intro.h"

void intro_sort(int* array, int size) {
    int max_depth = log2(size) * 2;
    intro_sort_recursive(array, 0, size - 1, max_depth);
}

void intro_sort_recursive(int* array, int begin, int end, int max_depth) {
    int size = end - begin + 1;
    if (size < 64)
        insertion_sort(&array[begin], size);
    else if (max_depth == 0)
        heap_sort(&array[begin], size);
    else {
        int pivot = quick_sort_partition(array, begin, end);
        intro_sort_recursive(array, begin, pivot - 1, max_depth - 1);
        intro_sort_recursive(array, pivot + 1, end, max_depth - 1);
    }
}
