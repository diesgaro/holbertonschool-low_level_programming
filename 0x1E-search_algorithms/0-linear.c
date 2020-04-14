#include "search_algos.h"

/**
 * linear_search - Function that use the linear algorithm search
 *
 * @array: Vector with the values to compare
 * @size: Size of vector
 * @value: Value to search
 *
 * Return: The index of the vector the value is find in the vector,
 * otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
	{
		while (i < size)
		{
			printf("Value checked array[%li] = [%i]\n", i, array[i]);
			if (array[i] == value)
				return (i);
			i++;
		}
	}
	return (-1);
}
