#include "main.h"

/**
 * _strspn - (Gets length of a prefix substring)
 * @s: String
 * @accept: Accept
 * Return: Number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i, j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
		}

		if (found == 0)
			break;
	}

	return (count);
}
