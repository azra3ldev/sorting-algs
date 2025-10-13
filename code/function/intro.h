#pragma once

#include <math.h>

#include "heap.h"
#include "insertion.h"
#include "quick.h"

/*
 * introsort is a hybrid algorithm that starts with quick,
 * switches to heap if can't find a good pivot, and
 * switches to insertion if number of elements is small.
 */
void intro_sort(int* array, int size);

void intro_sort_recursive(int* array, int begin, int end, int max_depth);
