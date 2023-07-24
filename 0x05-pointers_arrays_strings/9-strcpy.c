#include "main.h"

/**
 * *_strcpy - (Copies a string to another)
 * @dest: destination to be copied to
 * @src: string to copied
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (*(src + index) != '\0')
	{
		*(dest + index) = *(src + index);
		index++;
	}
	*(dest + index) = '\0';
	return (dest);

}
