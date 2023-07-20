#include "main.h"

/**
 * print_line - (Draws a straight line)
 *
 * @n: Number of times character is printed
 *
 * Return: Void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
