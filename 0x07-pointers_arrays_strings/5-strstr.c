/* File5: A func that locates a substring */
#include "main.h"
#include <stdio.h>

/**
 * compare - compares two strings
 * @haystack: source string
 * @needle: string being compared
 * Description: checks if needle is at start of haystack
 * Return: 1 if matches, 0 if not
 **/

int compare(char *haystack, char *needle)
{
	int a;

	for (a = 0; needle[a] != '\0'; a++)
	{
		if (haystack[a] == '\0')
			return (0);
		if (haystack[a] != needle[a])
			return (0);
	}
	return (1);
}

/**
 * _strstr - locates a substring
 * @haystack: source string
 * @needle: substring
 * Description: finds first instance of needle in haystack
 * Return: pointer to first instance, NULL if not in haystack
 **/

char *_strstr(char *haystack, char *needle)
{
	int b;

	if (needle[0] == '\0')
		return (haystack);

	for (b = 0; haystack[b] != '\0'; b++)
	{
		if (needle[0] == haystack[b])
		{
			if (compare(&haystack[b], needle) == 1)
				return (&haystack[b]);
		}
	}
	return (NULL);
}
