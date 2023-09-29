#include <stdio.h>

/**
 *main - print first 50 fibonacci
 *
 *Return: 0 always.
 */
int main(void)
{
	long int i, x = 1, y = 2, sum i = 0, even_Sum = 0;

	for (i = 0; i < 49; i++)
	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			even_Sum = even_Sum + y;
		}
		sum = x + y;
		x = y;
		y = sum;

	}
	printf("%ld\n", even_Sum);
	return (0);
}
