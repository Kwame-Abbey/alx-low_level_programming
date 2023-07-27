#include "main.h"

/**
 * *strcat - (Concatenates two strings)
 * @dest: Destination of concatenated strings
 * @src: String to be appended
 * Return: Concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	while (*(dest + len) != '\0')
		len++;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + (len + i)) = *(src + i);

	*(dest + (len + i)) = '\0';
	return (dest);
}
