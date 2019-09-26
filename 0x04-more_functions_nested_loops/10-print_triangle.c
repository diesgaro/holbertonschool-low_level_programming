#include "holberton.h"
/**
 * print_triangle - Function that draws a triangle in the terminal.
 * @size : Type integer
 * Return: Draws a triangle in the terminal.
 */
void print_triangle(int size)
{
	int i, x;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 1; x < size - i; x++)
			{
				_putchar(' ');
			}

			for (x = 0; x <= i; x++)
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
