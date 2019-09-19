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
	char v_char;

	for (v_char = 'z'; v_char >= 'a'; v_char--)
		putchar(v_char);

	putchar('\n');

	return (0);
}
