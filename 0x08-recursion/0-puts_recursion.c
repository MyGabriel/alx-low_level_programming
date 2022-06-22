/* File0: A func that prints a string */
#include "main.h"

/**
 * _puts_recursion - recursive puts
 * @s: pointer params
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
		_putchar(*s);
		_puts_recursion(s + 1);
}
