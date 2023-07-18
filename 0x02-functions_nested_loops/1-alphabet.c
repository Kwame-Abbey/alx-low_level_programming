#include "main.h"

/**
 * main - (Prints the alphabets in lowercase)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}

void print_alphabet(void)
{
	char a ='a';
	while (a <= 'z')
	{
		_putchar(a);
	}
}
