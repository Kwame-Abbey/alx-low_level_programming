#include "main.h"

/**
 * *_strncat - (Concatenates two strings)
 * @dest: Destination of concatenated strings
 * @src: String to be appended
 * @n: Number of bytes to be used
 * Return: Destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
