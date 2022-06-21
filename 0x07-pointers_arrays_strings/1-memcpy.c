/* File1: A func to copy a memory area with a constant byte */
#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: the memory area
 * @src: constant byte
 * @n: bytes from memory area
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while
		(a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
