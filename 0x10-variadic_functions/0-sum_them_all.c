#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - (returns the sum of all its parameters)
 * @n: Nuhmber of arguments
 * @...: ellipsis operator
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum, current;
	va_list args;

	va_start(args, n);

	sum = va_arg(args, int);

	for (i = 1; i < n; i++)
	{
		current = va_arg(args, int);
		sum += current;
	}

	return (sum);
}
