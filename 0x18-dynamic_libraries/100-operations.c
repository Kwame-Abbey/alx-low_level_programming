#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: Sum of two numbers
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: differnce of two numbers
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: product of two numbers
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: quotient of two integers
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - modulus of two integers
 * @a: first integer
 * @b: second integer
 * Return: modulus
 */

int mod(int a, int b)
{
	return (a % b);
}

