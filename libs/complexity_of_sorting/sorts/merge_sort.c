#include "merge_sort.h"

void _mergeSort(int *a, int left, int right, int *buf) {
    int size = right - left;
    if (size <= 1)
        return;

    int middle = left + (right - left) / 2;
    _mergeSort(a, left, middle, buf);
    _mergeSort(a, middle, right, buf);

    merge(a + left, middle - left,
          a + middle, right - middle,
          buf);
    memcpy(a + left, buf, size * sizeof(int));
}

void mergeSort(int *a, const size_t n) {
    int *buffer = (int *) malloc(sizeof(int) * n);
    _mergeSort(a, 0, n, buffer);
    free(buffer);
}