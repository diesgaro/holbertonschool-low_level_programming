#include "holberton.h"
/**
 * factorial - Function that returns the factorial of a number
 * @s: Pointer type int
 * Return: Factorial of a n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (factorial(n - 1) * n);
}
