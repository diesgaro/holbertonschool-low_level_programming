#include "holberton.h"
/**
 * swap_int - Function that swaps the values of two integers.
 * @a: Pointer type integer
 * @b: Pointer type integer
 * Return: Not return
 */
void swap_int(int *a, int *b)
{
	int v_tmp;

	v_tmp = *a;

	*a = *b;
	*b = v_tmp;
}
