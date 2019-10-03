#include "holberton.h"
/**
 * reverse_array - Function that reverses the array
 * @a: Pointer type int
 * @n: Variable type int
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int ini, end, tmp;

	end = n - 1;

	for (ini = 0; ini < n / 2; ini++)
	{
		tmp = a[ini];
		a[ini] = a[end];
		a[end] = tmp;

		end--;
	}
}
