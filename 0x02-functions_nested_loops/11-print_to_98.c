#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Function that prints all natural numbers from n to 98.
 * @n: Variable Integer type
 * Return: natural numbers from n to 98
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);

			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");
}
