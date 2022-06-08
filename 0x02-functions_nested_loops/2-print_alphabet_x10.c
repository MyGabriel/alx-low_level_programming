/* Description: Usint personal header file */
#include "main.h"

/**
* print_alphabet_x10 - print alphabet of letters
* Return: 0
* Printing lower case abc
*/

void print_alphabet_x10(void)
{
	int My = 'a';
	int My1 = 0;

	while
		(My1 < 10)
	{
		while
			(My <= 'z')
		{
			_putchar(My);
			My++;
		}
	}
	My1++;
	_putchar('\n');
}
