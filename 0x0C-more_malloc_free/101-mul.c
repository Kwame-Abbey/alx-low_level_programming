#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - (multiplies two integers)
 * @argc: argument count
 * @argv: argument vector
 * Return: Product of two integers
 */

int main(int argc, char **argv)
{
	int num1, num2, i, j;
	int result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{

			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}

		}
		result *= atoi(argv[i]);
	}
	printf("%d\n", result);

	return (0);
}
