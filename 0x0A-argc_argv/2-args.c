#include <stdio.h>

/**
 * main - (Prints all arguments received)
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Void
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
