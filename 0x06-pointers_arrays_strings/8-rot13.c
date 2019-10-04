#include "holberton.h"
/**
 * rot13 - Function that encodes a string into rot13
 * @s: Pointer type char
 * Return: s
 */
char *rot13(char *s)
{
	int i = 0, x = 0;

	char array[2][52] = {
		{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd',
		 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
		 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		 'y', 'z'},
		{'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
		 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
		 'H', 'I', 'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q',
		 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a',
		 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		 'l', 'm'}
	};

	while (s[i] != '\0')
	{
		x = 0;
		while (x < 52)
		{
			if (s[i] == array[0][x])
			{
				s[i] = array[1][x];
				break;
			}
			x++;
		}
		i++;
	}

	return (s);
}
