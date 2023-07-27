#include "main.h"

/**
 * _strcmp - (Compares two strings)
 * @s1: First string
 * @s2: Second string
 * Return: 0 if same, 1 if s1 > s2, -1 if s2 > s1
 */

int _strcmp(char *s1, char *s2)
{
	int i, is_same = 0, sign = 1;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
			{
				is_same = 1;
				break;
			} else if (s1[i] < s2[i])
			{
				is_same = 1;
				sign *= -1;
				break;
			}
		}
	return (is_same * sign);
}
