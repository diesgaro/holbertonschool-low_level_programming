#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_in_array(int *array, long int ini, long int fin);

#endif /* SEARCH_ALGOS_H */
