#include "holberton.h"
/**
 * _abs - Function that computes the absolute value of an integer.
 * @n: variable type integer
 * Return: return the absolute value of an integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
