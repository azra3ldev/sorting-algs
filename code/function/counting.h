#pragma once

#include <stdio.h>
#include <stdlib.h>

#include "../extra/aux.h"

/*
 * counts the frequency of every number in original array
 * and stores it in auxiliary counting array, then passes
 * the values back in order
 */
void counting_sort(int* array, int size);
