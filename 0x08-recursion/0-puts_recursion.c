#include "main.h"

/**
 * _puts_recursion - (Prints a string, followed by a new line)
 * @s: Pointer to string to be printed
 * Return: Void
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
