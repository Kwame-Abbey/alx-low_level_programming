#include "main.h"

/**
 * rev_string - (Reverses a string)
 * @s: String reversed
 * Return: Void
 */

void rev_string(char *s)
{
	int index = 0;
	char rev = s[0];
	int i;

	while (*(s + index) != '\0')
	{
		index++;
	}

	for (i = 0; i < index; i++)
	{
		index--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
