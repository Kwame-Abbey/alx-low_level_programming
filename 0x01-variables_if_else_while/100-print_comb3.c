#include <stdio.h>

/**
 * main - (Prints out all numbers between 00 and 99)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = i; j < 58; j++)
		{
			if (i == j)
			{
				continue;
			}

			putchar(i);
			putchar(j);

			if (i == 56 && j == 57)
			{
				break;
			} else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
