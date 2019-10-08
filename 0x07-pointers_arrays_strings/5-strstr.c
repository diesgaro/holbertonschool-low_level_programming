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
	char *str;
	char *substr;

	substr = needle;

	while (*haystack != '\0')
	{
		str = haystack;
		while (1)
		{
			if (*substr == '\0')
				return (haystack);

			if (*str++ != *substr++)
				break;
		}
		substr = needle;
		haystack++;
	}

	return ('\0');
}
