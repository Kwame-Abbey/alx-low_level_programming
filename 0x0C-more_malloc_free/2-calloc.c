#include "main.h"
#include <stdlib.h>

/**
 * _calloc - (Allocates memory for an array, using malloc)
 * @nmemb: Number of elements
 * @size: Bytes long
 * Return: Pointer to allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void (*ptr);

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
