#ifndef VARIADIC_F
#define VARIADIC_F

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct op - Struct op
 *
 * @op: The format
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	void (*f)(va_list list);
} op_t;

void op_string(va_list list);
void op_char(va_list list);
void op_float(va_list list);
void op_int(va_list list);

#endif /* VARIADIC_F */
