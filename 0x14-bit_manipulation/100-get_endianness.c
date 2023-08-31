#include "main.h"

/**
 * get_endianness - checks the endiannes
 *
 * Return: 0 or -1
 */

int get_endianness(void)
{
	int val = 1;
	char *endianne = (char *)&val;

	if (*endianne == 1)
		return (1);

	return (0);
}
