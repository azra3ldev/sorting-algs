#pragma once

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#include "../extra/vector.h"
#include "../extra/aux.h"
#include "intro.h"

/*
 * divides arrays by buckets (groups).
 * number of buckets will be square root of number range.
 * uses introsort to sort every bucket individually.
 */
void bucket_sort(int* array, int size);
