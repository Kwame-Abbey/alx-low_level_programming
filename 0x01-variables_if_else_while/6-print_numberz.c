#include <stdio.h>

/**
 * main - (A function that outputs single digit numbers using putchar)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 46;

	while (a < 58)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
