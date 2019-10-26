#include "variadic_functions.h"
/**
 * sum_them_all - Function that sum all its parameters
 *
 * @n: Variable type unsigned int
 *
 * Return: Int with the result of the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int result = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start (list, n);
		for (i = 0; i < n; i++)
			result += va_arg(list, int);

		va_end(list);

		return (result);
	}
}
