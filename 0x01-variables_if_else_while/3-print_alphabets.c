#include <stdio.h>

/**
 * main - (A function that outputs alphabets in lower followed by uppercase)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a = 'a';
	char b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}
