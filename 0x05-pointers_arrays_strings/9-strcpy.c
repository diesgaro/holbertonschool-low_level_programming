#include "holberton.h"
/**
 * _strcpy - Function that copies string pointed to by src
 * to the buffer pointed to by dest
 * @dest: Pointer type char
 * @src: Pointer type char
 * Return: The pointer to by dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
