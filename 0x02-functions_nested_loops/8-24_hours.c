#include "holberton.h"
/**
 * jack_bauer - Function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * Return: return every minute of the day
 */
void jack_bauer(void)
{
	int i, h0 = 0, h1 = 0, m0 = 0, m1 = 0;

	for (i = 0; i < 1440; i++)
	{
		_putchar(h0 + '0');
		_putchar(h1 + '0');
		_putchar(':');
		_putchar(m0 + '0');
		_putchar(m1 + '0');
		_putchar('\n');

		m1++;

		if (m1 > 9)
		{
			m1 = 0;
			m0++;
		}
		if (m0 > 5)
		{
			m0 = 0;
			h1++;
		}
		if (h1 > 9)
		{
			h1 = 0;
			h0++;
		}
	}
}
