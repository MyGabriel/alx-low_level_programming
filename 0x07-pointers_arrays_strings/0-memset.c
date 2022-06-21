/* File0: A func to fill memory */
#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with constant byte
 * @s: pointer to the memory area
 * @n: bytes of memory
 * @b: constant byte
 *
 * Return: the memory area of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while
		(a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
