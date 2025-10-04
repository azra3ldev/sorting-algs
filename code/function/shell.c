#include "shell.h"

void shell_sort(int* array, int size) {
    int h = 1;
    while (h < size) h = h * 3 + 1; // finds the biggest jump possible
    /*
     * i do h = h / 3 instead of h = (h - 1) / 3 because it's integer division, so
     * for example: h = 13, h / 3 = 4 and (13 - 1) / 3 = 4
     */
    for (h /= 3; h > 0; h /= 3) {
        for (int i = h; i < size; i++) {
            int min = array[i];
            int j;
            for (j = i - h; j >= 0 && array[j] > min; j -= h)
                array[j+h] = array[j];
            array[j+h] = min;
        }
    }
}
