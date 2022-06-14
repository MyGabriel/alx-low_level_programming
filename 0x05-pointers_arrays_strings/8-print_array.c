/* File8: Printing an array */
#include "main.h"
#include <stdio.h>

/**
 * print_array - a func for the array
 * @a: the pointer to the elements
 * @n: times to print elements
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0 ; b < n ; b++)
	{
		printf("%d", a[b]);

		if (b < n - 1)
		{
			putchar(32);
		}
	}
	putchar(10);
}
