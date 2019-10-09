#include "holberton.h"
/**
 * _sqrt_recursion - Function that returns the square root of a number
 * @n: Variable type int
 * Return: square root of a n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Funtion that compare the values of the funtion _sqrt_recursion
 * @n: variable type int
 * @x: variable type int
 * Return: x
 */
int _sqrt(int n, int x)
{
	if ((x * x) == n)
		return (x);
	else if ((x * x) < n)
		return (_sqrt(n, (x + 1)));
	else
		return (-1);
}
