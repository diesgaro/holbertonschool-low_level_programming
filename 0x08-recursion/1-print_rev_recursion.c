#include "holberton.h"
/**
 * _print_rev_recursion - Function that prints a string in reverse
 * @s: Pointer type char
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
