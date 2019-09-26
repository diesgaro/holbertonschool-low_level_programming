#include "holberton.h"
/**
 * print_line - Function that draws a straight line in the terminal.
 * @n : Type integer
 * Return: Draws a straight line in the terminal.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar ('_');
	}
	_putchar ('\n');
}
