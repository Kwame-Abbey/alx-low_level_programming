#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - (Searches for am integer)
 * @array: Array to be examined
 * @size: Number of elements in array
 * @cmp: Function pointer passed as argument
 * Return: Index of element if success or -1 if fail
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
