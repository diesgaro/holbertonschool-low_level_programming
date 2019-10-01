#include "holberton.h"
/**
 * rev_string - Function that reverses a string.
 * @s: Pointer type char
 * Return: Reverses a string
 */
void rev_string(char *s)
{
	int ini, end, tmp, i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	end = i - 1;

	for (ini = 0; ini < i / 2; ini++)
	{
		tmp     = s[ini];
		s[ini]  = s[end];
		s[end]  = tmp;

		end--;
	}
}
