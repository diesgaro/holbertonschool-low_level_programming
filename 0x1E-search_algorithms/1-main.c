#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	};

	int array2[] = {
		5, 6, 7, 8, 9
	};

	size_t size = sizeof(array) / sizeof(array[0]);
	size_t size2 = sizeof(array2) / sizeof(array2[0]);

	printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
	printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
	printf("Found %d at index: %d\n\n", 999, binary_search(array, size, 999));
	printf("Found %d at index: %d\n\n", 2, binary_search(array2, size2, 2));
	return (EXIT_SUCCESS);
}
