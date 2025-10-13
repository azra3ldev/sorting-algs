#pragma once

#include <stdbool.h>

#include "../extra/aux.h"

/*
 * this is optimized bubble sort, so it stops when the array is sorted.
 * this is really bad algorithm, since it compares every element with every other in worst cases.
 */
void bubble_sort(int* array, int size);
