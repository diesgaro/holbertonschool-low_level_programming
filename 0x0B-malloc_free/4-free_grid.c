#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Function that frees a bidimensional grid
 * @grid: Pointer to pointer type int
 * @height: Variable type int
 * Return: Always 0.
 */

void free_grid(int **grid, int height)
{
	int i;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
