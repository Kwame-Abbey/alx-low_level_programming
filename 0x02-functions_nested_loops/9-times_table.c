#include "main.h"

/**
 * times_table - (Prints the 9 times table).
 *
 * Return: Void
 */

void times_table(void)
{
	int a, b;

	for (a = 48; a <= 57, a++)
	{
		for (b = 48; b <= 57; b++)
		{
			_putchar(a * b);
			_putchar(44);
			_putchar(32);
		}
		_putchar('\n');
	}
}
