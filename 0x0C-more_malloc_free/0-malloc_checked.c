#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - (Allocates memory using malloc)
 * @b: Number of bytes to be allocated
 * Return: Void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr; /* declaring a void pointer */

	if (b == 0)
		return (NULL);

	/* Allocating memory dynamicaly */
	ptr = malloc(b);

	/* Checking if allocated memory was successful */
	if (ptr == NULL)
		exit(98); /* process termination with a status valueof 98 */

	return (ptr); /* returning pointer to allocatd memory if successful */
}
