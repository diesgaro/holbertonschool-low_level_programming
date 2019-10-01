#include "holberton.h"
/**
 * _strlen - Function that returns the length of a string.
 * @s: Pointer type char
 * Return: Length of a string s
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
