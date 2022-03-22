#ifndef SORTS_PROJECT_QUICK_SORT_H
#define SORTS_PROJECT_QUICK_SORT_H

#include <stdio.h>
#include <stdlib.h>

static int cmp_int(const void *a, const void *b) {
    int x = *((int *) a);
    int y = *((int *) b);
    if (x < y)
        return -1;
    if (x > y)
        return 1;

    return 0;
}

void quickSort(int *a, size_t n);

#endif
