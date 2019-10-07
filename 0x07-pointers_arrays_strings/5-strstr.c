#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - Function that locates a substring
 * @haystack: Pointer type char
 * @needle: Pointer type char
 * Return: A pointer haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (accept[x] == s[i])
			{
				s = &s[i];
				return (s);
			}
		}
	}
	return ('\0');
}
