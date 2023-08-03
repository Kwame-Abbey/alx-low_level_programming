#include <stdio.h>

/**
 * main - (Prints a function name)
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i == 0)
			break;
	}
	printf("%s\n", argv[0]);
	return (0);
}
