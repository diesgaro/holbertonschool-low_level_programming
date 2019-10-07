#include "holberton.h"
/**
 * _memset - Function that fills memory with a constant byte
 * @s: Pointer type char
 * @b: VAriable type char
 * @n: Variable type int
 * Return: A pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
