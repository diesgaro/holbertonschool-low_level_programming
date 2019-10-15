#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Function that returns a pointer to a bidimensional array
 * @width: Variable type int
 * @height: Variable type int
 * Return: A pointer.
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, x;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		a = malloc(sizeof(int *) * height);

		if (a == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < height; i++)
			{
				a[i] = malloc(sizeof(int) * width);

				if (a[i] == NULL)
				{
					while (i >= 0)
					{
						free(a[i]);
						i--;
					}
					free(a);
					return (NULL);
				}

				for (x = 0; x < width; x++)
					a[i][x] = 0;
			}
			return (a);
		}
	}
}
