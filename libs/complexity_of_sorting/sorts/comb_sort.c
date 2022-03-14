#include "comb_sort.h"

void combSort(int *a, const size_t size) {
    size_t step = size;
    int swapped = 1;

    while (step > 1 || swapped) {
        if (step > 1)
            step /= 1.24733;
        swapped = 0;

        for (size_t i = 0, j = i + step; j < size; ++i, ++j)
            if (a[i] > a[j]) {
                swap(&a[i], &a[j]);
                swapped = 1;
            }
    }
}