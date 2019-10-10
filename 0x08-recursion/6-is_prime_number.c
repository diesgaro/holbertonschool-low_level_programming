#include "holberton.h"
/**
 * is_prime_number - Function that return if input integer is prime number
 * @n: Variable type int
 * Return: 1 if n is a prime number or 0 if not
 */
int is_prime_number(int n)
{
	return (_prime(n, 2));
}

/**
 * _prime - Function that compare the values of the funtion is_prime_number
 * @n: variable type int
 * @x: variable type int
 * Return: x
 */
int _prime(int n, int x)
{
	if (n == x)
		return (1);
	else if (n % x == 0 || n <= 1)
		return (0);
	else
		return (_prime(n, (x + 1)));
}
