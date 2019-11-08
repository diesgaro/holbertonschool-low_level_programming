#include "holberton.h"
/**
 * clear_bit - Function that sets the value of a bit to 0 at the given index
 *
 * @n: Pointer unsigned long int
 * @index: Variable unsigned int
 *
 * Return: 1 if it worked or -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n & ~(1 << index);
		return (1);
	}
}
