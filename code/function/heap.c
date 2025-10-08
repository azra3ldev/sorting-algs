#include "heap.h"

void heap_sort(int* array, int size) {
    // turns array into heap
    for (int i = size / 2 + 1; i >= 0; i--)
        heapify(array, size, i);

    // starts removing every root (biggest value) and adding it to end (i)
    for (int i = size - 1; i > 0; i--) {
        swap(&array[0], &array[i]);
        heapify(array, i, 0); // updates the array
    }
}

void heapify(int* array, int size, int root_index) {
    int max = root_index;
    int left_index = 2 * root_index + 1;
    int right_index = 2 * root_index + 2;

    if (left_index < size && array[left_index] > array[max])
        max = left_index;

    if (right_index < size && array[right_index] > array[max])
        max = right_index;

    if (max != root_index) {
        swap(&array[root_index], &array[max]);
        heapify(array, size, max);
    }
}
