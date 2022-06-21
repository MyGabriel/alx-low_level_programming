/* File2: A func to locate a char in string */
#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the memory area
 * @c: constant byte
 *
 * Return: a pointer when the character is found
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	while
		(s[a] != '\0')
	{
		a++;
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}
	return ('\0');
}
