#include "holberton.h"
/**
 * _pow_recursion - Function that returns the value of x pow y
 * @x: Variable type int
 * @y: Variable type int
 * Return: value of x pow y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y != 0)
		return (x * _pow_recursion(x, (y - 1)));
	else
		return (1);
}
