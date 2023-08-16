#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - (Prints a name)
 * @name: Name to be printed
 * @f: function pointer to be passed as argument
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
