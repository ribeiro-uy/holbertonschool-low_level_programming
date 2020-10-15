#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - free the malloc of grid
 * @grid: something
 * @height: something
 * Return: something
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
