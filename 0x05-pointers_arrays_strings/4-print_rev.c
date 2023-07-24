#include "main.h"

/**
 * print_rev - (Prints a string in reverse)
 * @s: String to be printed
 * Return: Void
 */

void print_rev(char *s)
{
	int index = 0, i;

	while (s[index] != '\0')
	{
		index++;
	}

	for (i = index; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
