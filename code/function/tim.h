#pragma once

#include "merge.h"
#include "insertion.h"

/*
 * a simplified implementation of timsort.
 * divides array in smaller groups, then orders then with insertion
 * and merges them at the end.
 */
void tim_sort(int* array, int size);

void tim_sort_recursive(int* array, int begin, int end);
