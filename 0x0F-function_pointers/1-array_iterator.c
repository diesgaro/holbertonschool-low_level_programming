#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - Function that executes a function given as a parameter
 * on each element of an array.
 *
 * @array: Pointer type array
 * @size: Variable type size_t
 * @action: Function pointer
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
