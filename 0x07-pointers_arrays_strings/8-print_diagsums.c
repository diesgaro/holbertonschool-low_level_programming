#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Function that prints the sum o two diagonals
 * of a square matrix
 * @a: Pointer type int
 * @size: Variable type int
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, d1 = 0, d2 = 0;

	for (i = 0; i < size; ++i)
	{
		d1 += *(a + ((i * size) + i));
		d2 += *(a + (((i + 1) * size) - (i + 1)));
	}

	printf("%d, %d\n", d1, d2);
}
