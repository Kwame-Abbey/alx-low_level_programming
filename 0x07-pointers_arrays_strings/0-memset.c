#include "main.h"

/**
 * *_memset - (Fills memory with a constant byte)
 * @s: Pointer variable
 * @b: Constant byte
 * @n: number of bytes to be filled
 * Return: Pointer variable
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
