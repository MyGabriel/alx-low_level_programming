/* File5: A func that locates a substring */
#include "main.h"
#include <stdio.h>

/**
 * _strstr - find str in str
 * @haystack: pointer param
 * @needle: pointer param
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *a = haystack, *b = needle;

	while
		(*haystack)
	{
		while
			(*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (a);
		}
		needle = b;
		a++;
		haystack = b;
	}
	return (0);
}
