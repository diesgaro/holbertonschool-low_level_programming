#include "holberton.h"
/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: Pointer type char
 * Return: length of a string s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
