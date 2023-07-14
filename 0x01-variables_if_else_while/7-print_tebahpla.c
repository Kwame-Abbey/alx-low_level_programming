#include <stdio.h>

/**
 * main - (A function that prints the alphabets in reverse)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}

	putchar('\n');
	return (0);
}
