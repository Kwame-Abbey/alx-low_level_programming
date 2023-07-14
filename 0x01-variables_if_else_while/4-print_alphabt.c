#include <stdio.h>

/**
 * main - (A function that outputs alphabets in lowercase omitting q and e)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
			a++;
		}
	}

	putchar('\n');
	return (0);
}
