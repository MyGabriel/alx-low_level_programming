/* File5: Reversing a string */
#include "main.h"

/**
 * rev_string - reverse a string.
 *@s: the string to be reversed.
 */

void rev_string(char *s)
{
	int length, j, i;
	char fin, vol;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	j = length - 1;
	i = 0;

	while (j > i)
	{
		fin = s[i];
		vol = s[j];
		s[i] = vol;
		s[j] = fin;
		j--;
		i++;
	}
}
