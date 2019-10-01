#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Function that prints n elements of an array of integers
 * @a: Pointer type int
 * @n: Variable type int
 * Return: elements of an array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf(i ? ", %d" : "%d", a[i]);
	}

	printf("\n");
}
