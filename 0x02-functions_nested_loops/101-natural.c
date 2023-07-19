#include <stdio.h>
#include "main.h"

/**
 * print_naturals - (Prints the sum of all multiples of 3 and 5).
 *
 * Return: Void
 */

int print_naturals(void)
{
	int a, sum = 0;

	for (a = 0; a < 1024; a++)
	{
		if if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum += a;
		}
	}
	printf("%d\n", sum);
	return (0);
}
