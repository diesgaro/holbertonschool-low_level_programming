#include "holberton.h"
/**
 * puts_half - Function that prints half of a string
 * @str: Pointer type char
 * Return: print half of a string
 */
void puts_half(char *str)
{
	int half, x, i = 0;

	while (str[i] != '\0')
		i++;

	if (i % 2)
		half = (i - 1) / 2;
	else
		half = i / 2;

	for (x = (i - half); x < i; x++)
		_putchar(str[x]);

	_putchar('\n');
}
