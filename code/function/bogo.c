#include "bogo.h"

void shuffle(int* array, int size) {
    for(int i = 0; i < size; i++) {
        int r = rand() % size;

        if (i != r)
            swap(&array[i], &array[r]);
    }
}

int bogo_sort(int* array, int size) {
    int atempts = 0;
    while (!is_sorted(array, size)) {
        shuffle(array, size);
        atempts++;
    }

    return atempts;
}
