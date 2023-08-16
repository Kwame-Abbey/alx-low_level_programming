#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - (Prints the sum, product, difference, quotient or modulus of
 * two integers)
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(98);
	}

	result = get_op_func(argv[2]);

	if (result == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", result(atoi(argv[1]), atoi(argv[3])));
	return (0);

}
