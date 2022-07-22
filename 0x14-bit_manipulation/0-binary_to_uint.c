/* File0: A func that converts a binary to an u_int */
#include "main.h"

/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int rep = 0;
	int base = 1, y = 0;

	if (b == NULL)
		return (0);

	while
		(b[y + 1])
	{
		if (b[y] != '0' && b[y] != '1')
			return (0);
		y++;
	}

	while
		(y >= 0)
	{
		rep += ((b[y] - '0') * base);
		base *= 2;
		y--;
	}


	return (rep);

}
