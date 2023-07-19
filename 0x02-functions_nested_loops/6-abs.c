#include "main.h"

/**
 * _abs - (Computes the absolute value of an integer).
 *
 *@n: Value to be returned.
 *
 * Return: Always 0.
 */

int _abs(int n)
{

	if (n >= 0)
	{
		_putchar(n);
	} else if (n < 0)
	{
		_putchar(n + (n * 2));
	}

	return (0);
}
