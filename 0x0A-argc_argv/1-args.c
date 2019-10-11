#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print the number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i = 0;

		while (argv[i + 1] != '\0')
		{
			i++;
		}

		printf("%d\n", i);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
