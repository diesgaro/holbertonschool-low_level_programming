#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - main block
 * Description: Show a alphabet
 * Return: 0
 */
int main(void)
{
	int i;
	int v_div;
	int v_mod;

	for (i = 0; i < 100; i++)
	{
		v_div = i / 10;
		v_mod = i % 10;

		putchar(v_div + '0');
		putchar(v_mod + '0');

		if (i < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);

}
