#include "holberton.h"
/**
 * is_palindrome - Function that return if input string ir palindrome
 * @s: Pointer type char
 * Return: 1 if n is a palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	int l = _length(s) - 1;

	return (_palindrome(s, l - 1));
}

/**
 * _length - Function to get the length of a string
 * @s: Pointer type char
 * Return: length
 */
int _length(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (_length(s + 1) + 1);
}

/**
 * _palindrome - Function that evaluate if the string is palindrome
 * @s: Pointer type char
 * @l: Variable type int
 * Return: 1 if string is palindrome or 0 if not
 */
int _palindrome(char *s, int l)
{
	if (*s == *(s + l))
		if (l <= 0)
			return (1);
		else
			return (_palindrome(s + 1, l - 2));
	else
		return (0);
}
