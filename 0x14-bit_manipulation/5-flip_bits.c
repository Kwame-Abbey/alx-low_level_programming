#inlcude "main.h"

/**
 * flip_bits - retruns the number of bits you will need
 * to flip to get from one number to another
 * @n: number
 * @m: number of bits
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_op = n ^ m, _bits = 0;

	while (xor_op > 0)
	{
		_bits += (xor_op & 1);
		xor_op >>= 1;
	}

	return (_bits);
}
