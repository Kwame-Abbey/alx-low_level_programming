#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - (Print all natural numbers from n to 98).
 *
 * @n: Character to be returned.
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
			{
				printf("%d, ", a);
			} else
			{
				printf("%d", a);
			}
		}
	} else if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			if (a != 98)
			{
				printf("%d, ", a);
			} else
			{
				printf("%d", a);
			}
		}
	} else
	{
		printf("%d", n);
	}
	_putchar('\n');
}
