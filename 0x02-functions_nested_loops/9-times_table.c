#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int i, j, p;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			p = i * j;
			if (j == 0)
			{
				_putchar(p + '0');
			} else if (p < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			} else
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
