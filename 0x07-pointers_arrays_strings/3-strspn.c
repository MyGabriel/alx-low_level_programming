/* File3: A func to get the length of a prefix substring */
#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to a string
 * @accept: pointer to a string
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int read = 0;
	int a = 0;
	int b = 0;

	while
		(s[a] != '\0')
	{
		while
			(accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				read++;
			}
			b++;
		}
		b = 0;
		a++;
		if (s[a] == ' ')
		{
			break;
		}
	}
	return (read);
}
