#include <stdio.h>

/**
 * main - (A function that outputs the sizes of the various data types)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %lu", sizeof(char));
	printf("Size of an int: %lu", sizeof(int));
	printf("Size of a long int: %lu", sizeof(long int));
	printf("Size of a long long int: %lu", sizeof(long long int));
	printf("Size of a float: %lu", sizeof(float));
	return (0);
}
