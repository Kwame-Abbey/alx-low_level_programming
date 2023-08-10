#include "main.h"
#include <stdlib.h>
#include <string.h>

char *_memset(char *s, char c, unsigned int n);

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
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

/**
 * _memset - (Fills first n bytes with a constant byte c)
 * @s: Pointer variable
 * @c: constant byte
 * @n: Number of first bytes to be filled
 * Return: Pointer to memory
 */

char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = c;
	return (s);
}
