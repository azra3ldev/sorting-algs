#pragma once

#include "../extra/aux.h"

/*
 * auxiliary function to get the median of 3 elements in array.
 * median is the value in the middle.
 */
int median_of_three(int* array, int a, int b, int c);
/*
 * selects a pivot that is the median of begin, middle and end.
 */
int quick_sort_partition(int* array, int begin, int end);
/*
 * recursive quicksort fucntion.
 */
void quick_sort_recursive(int* array, int begin, int end);

void quick_sort(int* array, int size);
