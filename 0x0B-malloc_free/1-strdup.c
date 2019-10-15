#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Function that return a pointer which contains a copy
 * of the string given as a parameter.
 * @str: Pointer type char
 * Return: A pointer.
 */

char *_strdup(char *str)
{
	char *a;
	int i, len = 1;

	if (str != NULL)
	{
		while (str[len] != '\0')
		{
			len++;
		}

		a = malloc(sizeof(char) * (len));

		if (a == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < len; i++)
				a[i] = str[i];

			a[i] = '\0';

			return (a);
		}
	}
	else
	{
		return (NULL);
	}
}
