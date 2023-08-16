#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - (returns the sum of two integers)
 * @a: First integer
 * @b: Second integer
 * Return: Sum of integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - (Returns the difference of two integers)
 * @a: First integer
 * @b: Second integer
 * Return: Difference of integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - (Returns the product of two integers)
 * @a: First integer
 * @b: second integer
 * Return: Product of integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - (returns the quotient of two integers)
 * @a: First integer
 * @b: Second integer
 * Return: Quotient of integers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a / b);
}

/**
 * op_mod - (Returns the renainder of the division of two integers)
 * @a: First integer
 * @b: Second integer
 * Return: Remainder of the division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
