#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 *
 * @separator: string to be printed between strings
 * @n: number of optional strings to be passed
 * @...: ellipsis operator
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
			string = "(nil)";
		if (separator && i < n - 1)
			printf("%s%s", string, separator);
		else
			printf("%s", string);

	}
	printf("\n");
	va_end(args);
}
