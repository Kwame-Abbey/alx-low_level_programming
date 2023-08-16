#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	char *abb = (char *) main;
	int i, n_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n_bytes; i++)
	{
		printf("%02x", abb[i] & 0xFF);
		if (i != n_bytes - 1)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}
