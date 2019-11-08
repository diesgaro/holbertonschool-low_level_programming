#include "holberton.h"
/**
 * flip_bits - Function that returns the count of number of bits to need
 * to flip to get from one
 *
 * @n: Variable unsigned long int
 * @m: Variable unsigned long int
 *
 * Return: A uint with the number os the bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, comparate = 0;

	comparate = n ^ m;

	while (comparate)
	{
		if (comparate & 1)
			count++;
		comparate = comparate >> 1;
	}

	return (count);
}
