#include "main.h"

/**
 * print_most_numbers - (Print 0 to 9 excluding 2 and 4).
 *
 * Return: Void
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if ((a != 50 && a != 52))
		{
			_putchar(a);
		}
	}
	putchar('\n');
}
