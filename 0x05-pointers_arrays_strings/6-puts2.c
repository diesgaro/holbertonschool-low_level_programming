#include "holberton.h"
/**
 * puts2 - Function that prints every other character of a string,
 * starting with the first character
 * @str: Pointer type char
 * Return: every other character of a string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!(i % 2))
			_putchar(str[i]);

		i++;
	}

	_putchar('\n');
}
