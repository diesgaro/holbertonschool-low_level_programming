#include "holberton.h"
/**
 * times_table - Function that prints the 9 times table, starting with 0.
 * Return: 9 times table
 */
void times_table(void)
{
	int f0 = 0, f1 = 0, prod = 0;

	for (f0 = 0; f0 < 10; f0++)
	{
		for (f1 = 0; f1 < 10; f1++)
		{
			prod = f0 * f1;
			if (prod > 9)
			{
				_putchar (prod / 10 + '0');
				_putchar (prod % 10 + '0');
			}
			else if (f1 != 0)
			{
				_putchar (' ');
				_putchar (prod + '0');
			}
			else
			{
				_putchar (prod + '0');
			}

			if (f1 != 9)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
		_putchar ('\n');
	}
}
