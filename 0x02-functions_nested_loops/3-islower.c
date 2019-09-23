#include "holberton.h"
/**
 * _islower - Function that checks lowercase character
 * @c: character type char
 * Return: return 0 or 1
 */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (0);
	else
		return (1);
}
