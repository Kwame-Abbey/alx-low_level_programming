#include "main.h"

/**
 * more_numbers -(Prints 10 times the numbers form 0 to 14)
 *
 * Return: Void
 */

void more_numbers(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			c = b / 10;
			d = b % 10;
			if (b > 9)
			{
				_putchar(c + '0');
			}
			_putchar(d + '0');
		}
		_putchar('\n');
	}
}
