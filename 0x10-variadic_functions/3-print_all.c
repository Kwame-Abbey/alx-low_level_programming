#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 *
 * @format: a list ot types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i, int_n;
	char charac;
	float f_num;
	char *string;
	va_list args;

	i = 0;
	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				charac = va_arg(args, int);
				printf("%c", charac);
				break;
			case 'i':
				int_n = va_arg(args, int);
				printf("%d", int_n);
				break;
			case 'f':
				f_num = va_arg(args, double);
				printf("%f", f_num);
				break;
			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);

}
