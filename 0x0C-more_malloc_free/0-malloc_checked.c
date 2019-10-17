#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Function that allocates memory with malloc
 * @b: Variable type unsigned int
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);
	else
		return (a);
}
