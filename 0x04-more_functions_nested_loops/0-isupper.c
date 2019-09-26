#include "holberton.h"
/**
 * _isupper - Function that checks uppercase character
 * @c: character type char
 * Return: return 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
