#include <stdio.h>

/**
 * main - (A function that outputs all possible combination of single digits)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 44, b = 48, c = 32;

	while (b < 57)
	{
		putchar(b);
		putchar(a);
		putchar(c);
		b++;
	}

	putchar(57);

	return (0);
}
