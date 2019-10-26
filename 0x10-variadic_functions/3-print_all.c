#include "variadic_functions.h"
/**
 * print_all - Function that prints anything
 *
 * @format: Pointer type char
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int i = 0, x = 0;
	va_list list;
	char *sep = "";

	op_t options[] = {
		{"c", op_char},
		{"i", op_int},
		{"f", op_float},
		{"s", op_string},
		{NULL, NULL}
	};

	va_start(list, format);

	while (format[i] != '\0')
	{
		x = 0;
		while (options[x].op != '\0')
		{
			if (format[i] == options[x].op[0])
			{
				printf("%s", sep);
				options[x].f(list);
				sep = ", ";
			}
			x++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}

/**
 * op_string - Function that prints string
 *
 * @list: Variable type va_list
 *
 *Return: 0
 *
 */
void op_string(va_list list)
{
	char *v_string = va_arg(list, char*);

	if (v_string == NULL)
		v_string = "(nil)";

	printf("%s", v_string);
}

/**
 * op_char - Function that prints char
 *
 * @list: Variable type va_list
 *
 *Return: 0
 *
 */
void op_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * op_float - Function that prints float
 *
 * @list: Variable type va_list
 *
 *Return: 0
 *
 */
void op_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * op_int - Function that prints integer
 *
 * @list: Variable type va_list
 *
 *Return: 0
 *
 */
void op_int(va_list list)
{
	printf("%i", va_arg(list, int));
}
