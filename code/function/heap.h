#pragma once

#include "../extra/aux.h"

/*
 * heapsort algorithm that uses the array itself as max heap, instead of using another structure
 */
void heap_sort(int* array, int size);

/*
 * makes an array become a max heap (in array structure)
 */
void heapify(int* array, int size, int root_index);
