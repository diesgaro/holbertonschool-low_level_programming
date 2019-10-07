#include "holberton.h"
#include <stdio.h>
/**
 * set_string - Function that sets the value of a pointer to a char
 * @s: Pointer type char
 * @to: Pointer type char
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
