#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 *
 * @argc: Variable type int
 * @argv: Pointer type array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*gof)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	gof = get_op_func(argv[2]);

	if (gof == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", gof(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
