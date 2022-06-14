
#include "main.h"

/**
 * _strlen - give the length of a string
 * @s: the string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int z;
	int fin_len = 0;

	for (z = 0 ; s[z] != '\0' ; z++)
	{
		fin_len++;
	}
	return (fin_len);
}
