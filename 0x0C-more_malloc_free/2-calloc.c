#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - Function that allocates memory for an array with malloc.
 * @nmemb: Variable type unsigned int
 * @size: Variable type unsigned int
 * Return: A pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < nmemb; i++)
			a[i] = 0;

		return (a);
	}
}
