/* File4: A func that searches a string for any of a set of bytes */
#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 *
 * Return: a pointer to the byte that matches one of the bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b;

	while
		(s[a] != '\0')
	{
		b = 0;
		while
			(accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
			b++;
		}
		a++;
	}
	return (0);
}
