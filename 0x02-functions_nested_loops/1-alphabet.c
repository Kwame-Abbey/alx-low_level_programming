#include "main.h"

/**
 * main - (Prints the alphabets in lowercase)
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char a ='a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
