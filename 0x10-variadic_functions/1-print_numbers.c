#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: String to be printed between numbers
 * @n: Number of integers to be passed
 * @...: ellipsis operator
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		return;
	if (n == 0)
		return;

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d%c ", num, *separator);
	}
	va_end(args);
	printf("\n");
}
