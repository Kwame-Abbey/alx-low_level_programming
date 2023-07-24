#include "main.h"

/**
 * puts_half - (Prints half of a string)
 * @str: String to be printed
 * Return: Void
 */

void puts_half(char *str)
{
	int index = 0, i;

	while (*(str + index) != '\0')
	{
		index++;
	}

	if (index % 2 == 0)
	{
		for (i = index / 2; i < index; i++)
		{
			_putchar(*(str + i));
		}
	} else
	{
		for (i = (index + 1) / 2; i < index; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
