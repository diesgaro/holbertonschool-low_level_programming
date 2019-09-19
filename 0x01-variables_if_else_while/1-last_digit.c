#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
	int n;
	int v_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	v_digit = n % 10;

	if (v_digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n",
		       n,
		       v_digit);
	else if (v_digit < 6 && v_digit != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n",
		       n,
		       v_digit);
	else
		printf("Last digit of %i is %i and is 0\n",
		       n,
		       v_digit);

	return (0);
}
