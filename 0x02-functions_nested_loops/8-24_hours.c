#include "main.h"

/**
 * jack_bauer - (Prints every minute of the day)
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 9; b++)
		{
			if (b == 4 && a == 2)
			{
				break;
			}

			for (c = 0; c < 6; c++)
			{
				for (d = 0; d < 10; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(58);
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
	return (0);
}
