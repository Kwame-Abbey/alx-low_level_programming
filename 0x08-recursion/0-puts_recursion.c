#include "main.h"

/**
 * _puts_recursion - (Prints a string, followed by a new line)
 * @s: Pointer to string to be printed
 * Return: Void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
