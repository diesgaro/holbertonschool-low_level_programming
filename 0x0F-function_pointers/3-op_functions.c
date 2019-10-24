#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - Function that sum two numbers
 *
 * @a: variable type int
 * @b: variable type int
 *
 * Return: variable type int with the sum of (a) and (b)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that subtract two numbers
 *
 * @a: variable type int
 * @b: variable type int
 *
 * Return: variable type int with the difference of (a) and (b)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that multiplicate two numbers
 *
 * @a: variable type int
 * @b: variable type int
 *
 * Return: variable type int with the product of (a) and (b)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that divide two numbers
 *
 * @a: variable type int
 * @b: variable type int
 *
 * Return: variable type int with the division of (a) by (b)
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a / b);
	}
}

/**
 * op_mod - Function that search the module between two numbers
 *
 * @a: variable type int
 * @b: variable type int
 *
 * Return: variable type int with the module of (a) by (b)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a % b);
	}
}
