#pragma once

#include "../extra/aux.h"

/*
 * randomly shuffles the array until it's sorted
 * returns amount of attempts
 */
int bogo_sort(int* array, int size);
void shuffle(int* array, int size);
