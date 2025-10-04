#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/*
 * this function swaps two integers without an auxiliary variable.
 */
void swap(int* a, int* b);

/*
 * this function reads an array of size $(size) from $(input_src).
 * leave $(input_src) as stdin for standard input.
 * uses malloc(), so it has to be freed.
 */
int* read_array(int size, FILE* input_src);

/*
 * prints an array of a certain size to $(output_dst).
 * leave $(output_dst) as stdout for standard output.
 */
void print_array(int* array, int size, FILE* output_dst);

/*
 * checks if an array of certain size is sorted.
 * returns a boolean, not an integer.
 */
bool is_sorted(int* array, int size);

/*
 * returns true if two strings are equal.
 */
bool string_equal(char* s1, char* s2);
