#include "variadic_functions.h"
/**
 * print_strings - Function that print strings
 *
 * @separator: Pointer type char
 * @n: Variable type unsigned int
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *v_string;

	if (n > 0)
	{
		va_start(list, n);
		for (i = 1; i <= n; i++)
		{
			v_string = va_arg(list, char*);

			if (v_string != NULL)
				printf("%s", v_string);
			else
				printf("(nil)");

			if (separator != NULL && i != n)
				printf("%s", separator);
		}
		printf("\n");
		va_end(list);
	}
}
