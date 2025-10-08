#include "merge.h"

void merge_sort_partition(int* array, int left, int mid, int right) {
    int left_size = mid - left + 1;
    int right_size = right - mid;

    int* left_array = (int*) malloc(left_size * sizeof(int));
    int* right_array = (int*) malloc(right_size * sizeof(int));

    for (int i = 0; i < left_size; i++)
        left_array[i] = array[left + i];
    for (int i = 0; i < right_size; i++)
        right_array[i] = array[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < left_size && j < right_size) {
        if (left_array[i] <= right_array[j])
            array[k++] = left_array[i++];
        else
            array[k++] = right_array[j++];
    }

    while (i < left_size)
        array[k++] = left_array[i++];

    while (j < right_size)
        array[k++] = right_array[j++];

    free(left_array);
    free(right_array);
}

void merge_sort_recursive(int* array, int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;

    merge_sort_recursive(array, left, mid);
    merge_sort_recursive(array, mid + 1, right);

    merge_sort_partition(array, left, mid, right);
}

void merge_sort(int* array, int size) {
    merge_sort_recursive(array, 0, size - 1);
}
