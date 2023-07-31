#include "main.h"

/**
 * _strpbrk - (Matches any character)
 * @s: String to be scanned
 * @accept: Accept
 * Return: String that matches any charcter specified
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		s++;
	}
	return (0);
}
