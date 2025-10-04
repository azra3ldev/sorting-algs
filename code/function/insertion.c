void insertion_sort(int* array, int size) {
    int j;
    for (int i = 1; i < size; i++) {
        int min = array[i];
        for (j = i - 1; j >= 0 && array[j] > min; j--)
            array[j+1] = array[j];
        array[j+1] = min;
    }
}
