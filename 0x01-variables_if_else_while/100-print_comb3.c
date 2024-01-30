#include <stdio.h>

/**
 * main - (Prints out all numbers between 00 and 99)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = '0', j;

	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if ((i != '8') || (j != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
