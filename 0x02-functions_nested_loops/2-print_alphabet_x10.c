#include "main.h"

/**
 * print_alphabet_x10 - (Print 10 times alphabets in lowercase)
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		for (char a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		putchar('\n');
	}
}
