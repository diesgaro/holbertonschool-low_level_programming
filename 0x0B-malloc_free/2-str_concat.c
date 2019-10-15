#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: Pointer type char
 * @s2: Pointer type char
 * Return: A pointer.
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, x, len1 = 0, len2 = 0, len_t = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	len_t = (len1 + len2);

	a = malloc(sizeof(char) * (len_t + 1));

	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len1; i++)
			a[i] = s1[i];

		for (x = 0; x < len2; x++, i++)
			a[i] = s2[x];

		a[i] = '\0';

		return (a);
	}
}
