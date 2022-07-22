/* File100: A func that checks the endianness */
#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: big-endian - 0. Or little-endian - 1.
 */

int get_endianness(void)
{
	int bit = 1;
	char *endian = (char *)&bit;

	if (*endian == 1)
		return (1);

	return (0);
}
