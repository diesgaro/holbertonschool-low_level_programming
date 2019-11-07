#include "holberton.h"
/**
 * print_binary - Function that prints the binary representation of number
 *
 * @n: Variable unsigned long int
 *
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp = n;
	int count = 0;

	while ((temp >>= 1) > 0)
	{
		count++;
	}

	while (count >= 0)
	{
		(n >> count) & 1 ? _putchar('1') : _putchar('0');
		count--;
	}
}
