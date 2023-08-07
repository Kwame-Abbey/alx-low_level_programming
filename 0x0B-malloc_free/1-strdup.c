#include "main.h"
#include <stdlib.h>

/**
 * _strdup - (Returns a pointer to ia newly allocated space in memory, which
 *  contains a copy of the given string)
 *  @str: String to be copied
 *  Return: A pointer to Char or NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}

	if (str == NULL)
		return (0);

	ptr = (char *) malloc((len * sizeof(char)) + 1);

	if (ptr)
	{
		for (i = 0; i < len; i++)
			*(ptr + i) = *(str + i);
		*(ptr + len) = '\0';
		return (ptr);
	} else
		return (0);
}
