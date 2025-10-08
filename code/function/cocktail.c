#include "cocktail.h"

void cocktail_sort(int* array, int size) {
    bool is_swapping = true;
    // left to right
    for (int i = 0; i < size - 1 && is_swapping; i++) {
        is_swapping = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j+1]) {
                swap(&array[j], &array[j+1]);
                is_swapping = true;
            }
        }

        if(!is_swapping) break;
        is_swapping = false;

        // right to left
        for (int j = size - 1; j >= i; j--) {
            if (array[j] > array[j+1]) {
                swap(&array[j], &array[j+1]);
                is_swapping = true;
            }
        }
    }
}
