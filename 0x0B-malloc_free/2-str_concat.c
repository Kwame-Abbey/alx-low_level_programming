#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * str_concat - (Concatenates two strings)
 * @s1: First string
 * @s2: String to be appended to first string
 * Return: Pointer to char or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, len1, len2;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	ptr = (char *) malloc(((len1 + len2) * sizeof(char)) + 1);

	if (ptr)
	{
		for (i = 0; i < len1; i++)
			*(ptr + 1) = *(s1 + i);
		for (i = len1; i < len1 + len2; i++)
			*(ptr + i) = *(s2 + i);
		*(ptr + len1 + len2) = '\0';
		return (ptr);
	} else
		return (NULL);

}

/**
 * _strlen - (Computes the length of a string)
 * @s: String's length to be computed
 * Return: Length of string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
