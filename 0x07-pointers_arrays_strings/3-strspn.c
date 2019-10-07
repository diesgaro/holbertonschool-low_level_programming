#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: Pointer type char
 * @accept: Pointer type char
 * Return: A pointer s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, x, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (accept[x] == s[i])
			{
				count++;
				break;
			}
		}
		if (accept[x] == '\0')
		{
			break;
		}
	}

	return (count);
}
