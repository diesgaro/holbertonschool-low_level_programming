#include "holberton.h"
/**
 * print_rev - Function that prints a string in reverse.
 * @s: Pointer type char
 * Return: Print string
 */
void print_rev(char *s)
{
	char r[100];
	int begin, end, i = 0;

	for (i = 1; s[i] != '\0'; i++)
		i++;

	end = i - 1;

	for (begin = 0; begin < i; begin++)
	{
		r[begin] = s[end];
		end--;
		_putchar(r[begin]);
	}

	_putchar('\n');
}
