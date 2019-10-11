#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int prod = (atoi(argv[1]) * atoi(argv[2]));

		printf("%d\n", prod);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
