#include "holberton.h"
/**
 * get_bit - Function that returns the value of a bit at a given index
 *
 * @n: Variable unsigned long int
 * @index: Variable unsigned int
 *
 * Return: Value of the bit at index or -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	return ((n >> index) & 1);
}
