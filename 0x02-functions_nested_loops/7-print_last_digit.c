#include "main.h"

/**
 * print_last_digit - (Prints last digit ofa number).
 *
 * @n: Character to be returned.
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = (-1 * (n % 10));
		_putchar(last_digit + '0');
		return (last_digit);
	} else if (n >= 0)
	{
		last_digit = n % 10;
		_putchar(last_digit + '0');
		return (last_digit);
	}
	return (0);
}
