#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - (Executes a function given as a parameter on each
 * element of an array)
 *
 * @array: Array to be used
 * @size: Number of elements in array
 * @action: function pointer as argument
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		return;
	if (size <= 0)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
