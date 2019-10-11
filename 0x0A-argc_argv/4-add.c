#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i = 1, add = 0;

		while (argv[i] != '\0')
		{
			if (!_validate(argv[i]))
			{
				add += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}

			i++;
		}

		printf("%d\n", add);

		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}

/**
 * _validate - Function thah validate if exist a character
 * @s: Pointer type char
 * Return: 1 o 0
 */

int _validate(char *s)
{
	while (*s != '\0')
	{
		if (*s < 48 || *s > 57)
		{
			return (1);
		}
		s++;
	}
	return (0);
}
