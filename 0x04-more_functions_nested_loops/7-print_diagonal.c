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
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (a = 1; a <= n; a++)
		{
			if (a > 1)
			{
				for (b = 1; b <= a - 1; b++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
