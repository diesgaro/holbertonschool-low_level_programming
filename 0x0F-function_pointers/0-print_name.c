#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Function that prints a name
 *
 * @name: Pointer type char
 * @f: function pointer
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		(*f)(name);
	else
		return;
}
