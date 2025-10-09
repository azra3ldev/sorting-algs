#include "tim.h"

void tim_sort_recursive(int* array, int left, int right) {
    if (left >= right) return;

    int size = right - left + 1;
    if (size < 64) {
        insertion_sort(&array[left], size);
        return;
    }

    int mid = left + (right - left) / 2;

    tim_sort_recursive(array, left, mid);
    tim_sort_recursive(array, mid + 1, right);

    merge_sort_partition(array, left, mid, right);
}

void tim_sort(int* array, int size) {
    tim_sort_recursive(array, 0, size - 1);
}
