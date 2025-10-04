#include "quick.h"

int median_of_three(int* array, int a, int b, int c) {
    if ((array[a] > array[b]) ^ (array[a] > array[c]))
        return a;

    if ((array[b] < array[a]) ^ (array[b] < array[c]))
        return b;

    return c;
}

int quick_sort_partition(int* array, int begin, int end) {
    int middle = (begin + end) / 2;
    int median = median_of_three(array, begin, middle, end);
    swap(&array[median], &array[end]); // moves the pivot to the end
    int pivot = array[end];

    int i = begin;
    for (int j = begin; j < end; j++)
        if (array[j] <= pivot)
            swap(&array[i++], &array[j]);

    swap(&array[i], &array[end]);

    return i; // returns the partition index
}

void quick_sort(int* array, int begin, int end) {
    if (begin >= end) return;

    int pivot = quick_sort_partition(array, begin, end);

    quick_sort(array, begin, pivot - 1);
    quick_sort(array, pivot + 1, end);
}
