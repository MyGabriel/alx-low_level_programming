/* File6: Printing every other char of a string */
#include "main.h"

/**
 * puts2 - the func in use for the printing
 * @str: the string to print
 */

void puts2(char *str)
{
	int a;
	int b;

	for (a = 0 ; str[a] != '\0' ; a++)
	{
		;
	}
	for (b = 0 ; b < a ; b = b + 2)
	{
		_putchar(str[b]);
	}
	_putchar(10);
}
