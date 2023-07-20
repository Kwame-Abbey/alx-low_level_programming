#include "main.h"

/**
 * print_diagonal - (Draws a diagonal line on the terminal)
 *
 * @n: Number of times character is to be printed
 *
 * Return: Void
 */

void print_diagonal(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (a = 0; a < n; a++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
