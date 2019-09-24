#include "holberton.h"
/**
 * print_last_digit - Function that prints the last digit of a number
 * @n: variable type integer
 * Return: return the last digit of a number
 */
int print_last_digit(int n)
{
	int v_digit;

	if (n >= 0)
		v_digit = n % 10;
	else
		v_digit = (n % 10) * -1;

	_putchar (v_digit + '0');

	return (v_digit);
}
