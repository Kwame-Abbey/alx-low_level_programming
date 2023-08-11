#include "main.h"
#include <stdlib.h>

/**
 * _realloc - (Reallocates a memory block using malloc and free)
 * @ptr: Pointer of already allocated memory
 * @old_size: Old size of memory
 * @new_size: New size
 * Return: Pointer to newly allocatd memory or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		free(ptr);
		ptr = p;
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		free(ptr);
		ptr = p;
	}

	return (p);

}
