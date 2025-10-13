#include "counting.h"

void counting_sort(int* array, int size) {
    // this will find smallest and biggest vlaue in array
    int min = array[0], max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min)
            min = array[i];

        if (array[i]> max)
            max = array[i];
    }

    if (min < 0) {
        fprintf(stderr, "ERROR: sort by counting doesn't support negative numbers.\n");
        exit(EXIT_FAILURE);
    }

    int range = max - min; // size of the auxiliary array
    int* count_array = (int*) calloc(range + 1, sizeof(int)); // needs to be calloc to fill everything with zeros
    validate_alloc(count_array);

    // count frequency of each number and stores it in count_array
    for (int i = 0; i < size; i++) {
        int pos = array[i] - min;
        count_array[pos]++;
    }

    int i = 0;
    for (int j = 0; j < range + 1; j++) {
        while (count_array[j] > 0) {
            int value = j + min;
            array[i] = value;
            count_array[j]--;
            i++;
        }
    }

    free(count_array);
}
