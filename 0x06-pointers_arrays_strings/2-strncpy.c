#include "holberton.h"
/**
 * _strncpy - Function that copies a string
 * @dest: Pointer type char
 * @src: Pointer type char
 * @n: Variable type integer
 * Return: The pointer dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}