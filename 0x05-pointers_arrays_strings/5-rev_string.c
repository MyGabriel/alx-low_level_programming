/* File5: Reversing a string */
#include "main.h"

/**
 * rev_string - a func that reverses a string
 * @s: holi
 */
void rev_string(char *s)
{
	int a;
	int b;
	int now;
	int len;

	while
		(s[a] != 0)
	{
		a++;
	}

	len = a;
	a = 0;
	b = len - 1;

	while
		(a < b)
	{
		now = s[a];
		s[a] = s[b];
		s[j] = now;
		a++;
		b--;
	}
}
