#ifndef SEARCH_H
#define SEARCH_H

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int find_index(int *array, int value, int low, int high, size_t size);

#endif
