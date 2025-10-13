#pragma once

#include "../extra/aux.h"

/*
 * randomly shuffles the array until it's sorted
 * returns amount of attempts
 */
int bogo_sort(int* array, int size);

/*
 * swaps every element with a random one
 */
void shuffle(int* array, int size);
