#include "main.h"

/**
 * rev_string - (Reverses a string)
 * @s: String reversed
 * Return: Void
 */

void rev_string(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}

	index = index - 1;

	while (index >= 0)
	{
		_putchar(s[index]);
		index--;
	}
}
