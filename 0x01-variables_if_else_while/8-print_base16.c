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
	int v_num;
	char v_char;

	for (v_num = 0; v_num < 10; v_num++)
		putchar(v_num + '0');

	for (v_char = 'a'; v_char <= 'f'; v_char++)
		putchar(v_char);

	putchar('\n');

	return (0);
}
