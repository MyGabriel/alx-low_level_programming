/* File5: A func that locates a substring */
#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 *
 * Return: a pointer to the beginning of a substring
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	for (a = 0; haystack[a] != '\0';)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (needle[b] != haystack[a + b])
			{
				break;
			}
		}
	if (needle[b] == '\0')
	{
		return (&haystack[a]);
	}
	i
	a++;
	}
	return ('\0');
}
