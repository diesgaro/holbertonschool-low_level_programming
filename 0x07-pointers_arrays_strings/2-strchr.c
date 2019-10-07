#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - Function that locates a character in a string
 * @s: Pointer type char
 * @c: Variable type char
 * Return: A pointer s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);

		s++;
	}
	return ('\0');
}
