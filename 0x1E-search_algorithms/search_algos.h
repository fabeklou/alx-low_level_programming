#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

/* Standard Library */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Searching Algo functions */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS */
