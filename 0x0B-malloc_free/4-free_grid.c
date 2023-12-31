#include "main.h"
#include <stdlib.h>

/**
 * free_grid - (Frees a 2d dimensional grid)
 * @grid: 2d array of integers
 * @height: Number of rows
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
