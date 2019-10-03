#include "holberton.h"
/**
 * leet - Function that encodes a string into 1337
 * @s: Pointer type char
 * Return: s
 */
char *leet(char *s)
{
	int i = 0, x = 0;

	char array[3][5] = {
		{'a', 'e', 'o', 't', 'l'},
		{'A', 'E', 'O', 'T', 'L'},
		{'4', '3', '0', '7', '1'}
	};

	while (s[i] != '\0')
	{
		x = 0;
		while (x < 5)
		{
			if (s[i] == array[0][x] || s[i] == array[1][x])
				s[i] = array[2][x];
			x++;
		}
		i++;
	}

	return (s);
}
