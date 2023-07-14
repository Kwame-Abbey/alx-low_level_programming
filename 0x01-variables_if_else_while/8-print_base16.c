#include <stdio.h>

/**
 * main - (A function that outputs all numbers in base 16 in lowercase)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 48, b = 97;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}

	while (b <= 102)
	{
		putchar(b);
		b++;
	}

	putchar('\n');

	return (0);
}
