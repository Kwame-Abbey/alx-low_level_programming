#include "main.h"

/**
 * binary_to_uint - Converts a binary number to unsigned int
 *
 * @b: Binary number to be converted
 *
 * Return: Converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, i;
	unsigned int dec_rep = 0; /* decimal representation */

	if (b == NULL)
		return (0);
	while (b[len])
		len++;

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		dec_rep = dec_rep * 2 + (b[i] - '0');
	}

	return (dec_rep);
}
