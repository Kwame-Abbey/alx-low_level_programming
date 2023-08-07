#include "main.h"
#include <stdlib.h>

/**
 * create_array - (Creates an array of chars, and initializes it with a
 * specific char)
 * @size: Number of bytes to be used
 * @c: Char to be initialized with
 * Return: A Pointer to char
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (0);

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
		return (0);
	else if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			*(ptr + i) = c;
		}
	}
	return (ptr);

}
