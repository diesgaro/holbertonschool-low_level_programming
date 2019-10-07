#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - Function that prints the chessboard
 * @a: Pointer array type char
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int i, x;

	for (i = 0; i < 8; i++)
	{
		for (x = 0; x < 8; x++)
		{
			putchar (a[i][x]);
		}
		putchar ('\n');
	}
}
