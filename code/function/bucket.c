#include "bucket.h"

void bucket_sort(int* array, int size) {
    int range = find_range(array, size); // range of numbers
    int num_buckets = ceil(sqrt(range)); // you can calculate the numbers of buckets the way you prefer (or even hardcode it)

    Vector** buckets = (Vector**) malloc(num_buckets * sizeof(Vector*)); // array of pointers to the vectors (buckets)
    for (int i = 0; i < num_buckets; i++) { // initialize buckets
        buckets[i] = vector_new(1); // vectors will start with space to only 1 element, to avoid using too much memory
    }

    // PART 1: put the elements in the proper buckets
    for (int i = 0; i < size; i++) { // add elements in proper bucket
        int bucket = array[i] / num_buckets; // integer division will give us the adequate bucket
        if (bucket >= num_buckets) // if it passed the limit of the last bucket
            bucket = num_buckets - 1;
        vector_push(buckets[bucket], array[i]);
    }

    // PART 2: sort each bucket and add elements back to the original array
    int k = 0; // this will be the index of the array
    for (int i = 0; i < num_buckets; i++) { // iterates through array of buckets
        intro_sort(buckets[i]->data, buckets[i]->size); // sorts each bucket by insertion
        for (int j = 0; j < (int)buckets[i]->size; j++) { // iterates through bucket
            array[k++] = buckets[i]->data[j];
        }
    }

    // END: free the memory space
    for (int i = 0; i < num_buckets; i++) {
        vector_free(&buckets[i]);
    }
    free(buckets);
}
