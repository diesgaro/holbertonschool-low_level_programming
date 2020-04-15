#include "search_algos.h"

/**
 * binary_search - Function that use the binary algorithm search
 *
 * @array: Vector with the values to compare
 * @size: Size of vector
 * @value: Value to search
 *
 * Return: The index of the vector the value is find in the vector,
 * otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	long int ini = 0, fin = size - 1, mid = 0;

	if (array)
	{
		while (ini <= fin)
		{
			print_in_array(array, ini, fin);
			mid = ((fin - ini) / 2) + ini;
			if (value == array[mid])
				return (mid);
			else if (value > array[mid])
				ini = mid + 1;
			else if (value < array[mid])
				fin = mid - 1;
		}
	}
	return (-1);
}

/**
 * print_in_array - Function that print the elements of array on search
 *
 * @array: Vector with the values to print
 * @ini: Beginn index of the current vector
 * @fin: last index of the current vector
 *
 * Return: Nothing
 */

void print_in_array(int *array, long int ini, long int fin)
{
	int i = 0;
	char *sep = "";

	printf("Searching in array: ");
	for (i = ini; i <= fin; i++)
	{
		printf("%s%i", sep, array[i]);
		sep = ", ";
	}

	printf("\n");
}
