#include "holberton.h"
/**
 * _isdigit - Function that checks for a digit
 * @c: character type int
 * Return: return 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
