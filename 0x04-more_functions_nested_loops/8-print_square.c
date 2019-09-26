#include "holberton.h"
/**
 * print_square - Function that prints a square
 * @size : Type integer
 * Return: Prints a square in the terminal.
 */
void print_square(int size)
{
	int i, x;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
