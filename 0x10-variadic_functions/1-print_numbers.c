#include "variadic_functions.h"
/**
 * print_numbers - Function that print numbers
 *
 * @separator: Pointer type char
 * @n: Variable type unsigned int
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 1; i <= n; i++)
	{
		printf("%i", va_arg(list, int));
		if (separator != NULL && i != n)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
