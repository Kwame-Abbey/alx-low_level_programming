#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - (Returns a pointer to a 2D array of integers)
 * @width: Number of rows
 * @height: Number of columns
 * Return: Pointer to int or Null
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **) malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++) /* loop thru each row */
	{
		/* Allocate memory for each row */
		p[i] = (int *) malloc(width * sizeof(int));
		if (p[i] == NULL) /* if alloc fails return null */
		{
			return (NULL);
		}
		/* Initialize the elements in current row to 0 */
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}

	return (p);
}
