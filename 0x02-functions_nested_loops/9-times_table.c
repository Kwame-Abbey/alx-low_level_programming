#include "main.h"

/**
 * times_table - (Prints the 9 times table).
 *
 * Return: Void
 */

void times_table(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			int product = a * b;
			_putchar(product + '0');
			
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
