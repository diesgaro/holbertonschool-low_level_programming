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
	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}
