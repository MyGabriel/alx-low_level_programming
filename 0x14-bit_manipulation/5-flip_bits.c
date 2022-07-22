/* File5: A func that rets bits needed to flip to get one num to ano */
#include "main.h"

/**
 * flip_bits - Counts bits needed to be flipped to get one num to ano.
 * @n: The number.
 * @m: The number to flip n to.
 * Return: The num of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while
		(xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
