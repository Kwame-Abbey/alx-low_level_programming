#include "main.h"

/**
 * *_strcpy - (Copies a string to another)
 * @dest: destination to be copied to
 * @src: string to copied
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0, i;

	while (*(src + index) != '\0')
	{
		index++;
	}

	index = index + 1;

	for (i = 0; i <= index; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);

}
