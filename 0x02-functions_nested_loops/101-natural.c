#include <stdio.h>
#include "main.h"

/**
 * print_naturals - (Prints the sum of all multiples of 3 and 5).
 *
 * Return: Void
 */

void print_naturals(void)
{
	int a, sum = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum += a;
		}
	}
	printf("%d", sum);
}
