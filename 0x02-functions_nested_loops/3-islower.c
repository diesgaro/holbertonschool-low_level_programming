#include "holberton.h"
/**
 * _islower - Function that checks lowercase character
 * @c: character type char
 * Return: return 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
