#include "main.h"

/**
 * *_strncpy - (Copies a string)
 * @dest: Destination of copied string
 * @src: Where string is to be copied from
 * @n: Number of characters to be copied
 * Return: Destination of copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
