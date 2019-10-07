#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 * @s: Pointer type char
 * @accept: Pointer type char
 * Return: A pointer s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, x;

        for (i = 0; s[i] != '\0'; i++)
        {
                for (x = 0; accept[x] != '\0'; x++)
                {
                        if (accept[x] == s[i])
                        {
                                s = &s[i];
                                return (s);
                        }
                }
        }
        return ('\0');
}
