#include "holberton.h"
/**
 * print_rev - Function that prints a string in reverse.
 * @s: Pointer type char
 * Return: Print string
 */
void print_rev(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	while (i > 0)
	{
		s--;
		_putchar(*s);
		i--;
	}

	_putchar('\n');
}
