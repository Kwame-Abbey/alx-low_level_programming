#include "main.h"

/**
 * puts2 - (Prints every other character of a string)
 * @str: String to be printed
 * Return: Void
 */

void puts2(char *str)
{
	int index = 0, i;

	while (*(str + index) != '\0')
	{
		index++;
	}

	for (i = 0; i < index; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
