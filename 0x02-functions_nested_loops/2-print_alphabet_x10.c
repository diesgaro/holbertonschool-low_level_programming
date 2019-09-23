#include "holberton.h"
/**
 * print_alphabet_x10 - Function to print alphabet 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);

		_putchar('\n');
	}
}
