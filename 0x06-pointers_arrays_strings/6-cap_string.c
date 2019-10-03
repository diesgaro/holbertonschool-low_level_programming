#include "holberton.h"
#include <stdio.h>
/**
 * cap_string - Function that capitalizes words of a string.
 * @s: Pointer type char
 * Return: s
 */
char *cap_string(char *s)
{
	int i = 0, x = 0, flag = 0;
	char sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (s[i] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
			flag = 1;

		x = 0;

		while (sep[x] != '\0')
		{
			if (sep[x] == s[i])
				flag = 1;
			x++;
		}

		if (flag)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
				flag = 0;
			}
			else if (s[i] >= 65 && s[i] <= 90)
				flag = 0;
			else if (s[i] >= 48 && s[i] <= 57)
				flag = 0;
		}
		i++;
	}
	return (s);
}
