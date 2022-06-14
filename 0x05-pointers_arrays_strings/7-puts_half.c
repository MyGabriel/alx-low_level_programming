/* File7: Printing the half of a string */
#include "main.h"

/**
 * puts_half - a func
 * @str: A pointer
 * Return: void which means our answer is correct
 */

void puts_half(char *str)

{
	int a, fin;

	a = 0;
	while
		(str[a] != '\0')
	{
		a++;
	}

	fin = (a + 1) / 2;

	for (a = fin; str[a]; a++)
	{
	_putchar (str[a]);
}

	_putchar (10);

}
