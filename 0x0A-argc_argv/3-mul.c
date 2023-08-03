#include <stdio.h>
#include <stdlib.h>

/**
 * main - (Multiplies two integers)
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	} else
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
	}
	printf("%d\n", result);
	return (0);
}
