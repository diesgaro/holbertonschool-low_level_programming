#include "holberton.h"
/**
 * print_diagonal - Function that draws a diagonal in the terminal.
 * @n : Type integer
 * Return: Draws a diagonal in the terminal.
 */
void print_diagonal(int n)
{
	int i, x;

	x = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			x = i;
			while (x > 0)
			{
				_putchar(' ');
				x--;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
