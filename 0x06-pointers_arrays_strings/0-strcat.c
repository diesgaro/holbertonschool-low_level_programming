#include "holberton.h"
/**
 * _strcat - Function that concatenates two strings
 * to the buffer pointed to by dest
 * @dest: Pointer type char
 * @src: Pointer type char
 * Return: The pointer dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, x = 0;

	while (dest[i] != '\0')
		i++;

	while (src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}

	dest[i] = '\0';

	return (dest);
}
