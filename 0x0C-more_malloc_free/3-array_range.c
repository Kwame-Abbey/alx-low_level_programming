#include <stdlib.h>
#include "main.h"

/**
 * array_range - (Creates an array of integers)
 * @min: Minimum number to be included
 * @max: Maximum number to be included
 * Return: Pointer to newly created array or NULL
 */

int *array_range(int min, int max)
{
	int i, *ptr;
	int t = min;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
	{
		*(ptr + i) = t;
		t++;
	}

	return (ptr);
}
