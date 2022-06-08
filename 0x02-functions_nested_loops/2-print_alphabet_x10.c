/* Description: Usint personal header file */
#include "main.h"

/**
* print_alphabet_x10 - print alphabet of letters
* Return: 0
* Printing lower case abc
*/

void print_alphabet_x10(void)
{
	int My;
	int My1;

	My1 = 0;

	while
		(My1 <= 9)
	{
		My = 'a';
		while
			(My <= 'z')
		{
			_putchar(My);
			My++;
		}
		My1++;
		_putchar(10);
	}
}
