#include "main.h"

/**
 * reverse_array - (Reverse thecontent of an array of integers)
 * @a: Array to be reversed
 * @n: Number of elements of the aray
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i, b;

	for (i = 0; i < n / 2; i++)
	{
		b = *(a + i);
		*(a + i) = *(a + (n - 1 - i));
		*(a + (n - 1 - i)) = b;
	}
}
