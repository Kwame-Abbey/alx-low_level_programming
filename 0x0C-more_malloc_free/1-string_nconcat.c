#include <stdlib.h>
#include "main.h"

unsigned int _strlen(char *);

/**
 * string_nconcat - (Concatenates two strings)
 * @s1: First string
 * @s2: String to be appended to first string
 * @n: Number of bytes if s2 to be apended to s1
 * Return: Pointer to newly allocated memory or Null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1;
	char *ptr;

	/* Passing an empty string if null is passed to either string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* using the entire string if n >= length of s2 */
	if (n >= _strlen(s2))
		n = _strlen(s2);

	/* computing length of each string */
	len1 = _strlen(s1);

	/* Allocating memory dynamically */
	ptr = malloc(sizeof(char) * (len1 + n + 1));

	/* Returning null if memory allocation fails */
	if (ptr == NULL)
		return (NULL);

	/* Concatenating s1 to allocated memory */
	for (i = 0; i < len1; i++)
		*(ptr + i) = *(s1 + i);

	/* Appending n bytes of s2 to allocated memory */
	for (i = 0; i < n; i++)
		*(ptr + len1 + i) = *(s2 + i);
	*(ptr + len1 + n) = '\0';

	return (ptr);
}

/**
 * _strlen - (Returns the length of a string)
 * @s: String's length to be computed
 * Return: Length of string
 */

unsigned int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
