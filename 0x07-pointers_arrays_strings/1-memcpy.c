#include "holberton.h"
/**
 * _memcpy - Function that copies memory area
 * @dest: Pointer type char
 * @src: Pointer type char
 * @n: Variable type int
 * Return: A pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}

	return (dest);
}
