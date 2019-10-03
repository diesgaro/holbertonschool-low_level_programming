#include "holberton.h"
#include <stdio.h>
/**
 * _strncat - Function that concatenates two strings
 * @dest: Pointer type char
 * @src: Pointer type char
 * @n: Variable type integer
 * Return: The pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, x = 0;

	while (dest[i] != '\0')
		i++;

	while (src[x] != '\0' && n > 0)
	{
		dest[i] = src[x];
		x++;
		n--;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
