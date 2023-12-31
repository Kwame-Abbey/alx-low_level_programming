#include "main.h"

/**
 * *_strchr - (Locate character in a string)
 * @s: String
 * @c: Character to be located
 * Return: Pointer
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		++s;
	}

	if (*s == c)
		return (s);

	return (0);
}
