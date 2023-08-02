#include "main.h"

/**
 * _sqrt_recursion - (returns natural square root of a number)
 * @n: number to calculate the sqrt of
 * Return: Resulting sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - (recurses to find natural sqrt)
 * @n: number
 * @i: iterator
 * Return: Sqrt
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
