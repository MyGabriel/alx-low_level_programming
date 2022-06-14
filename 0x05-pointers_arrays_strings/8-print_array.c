/* File8: Printing an array */
#include "main.h"
#include <stdio.h>

/**
 * main - void
 * print_array - a func for the array
 * @a: the pointer to the elements
 * @n: times to print elements
 */
void print_array(int *, int);

int main(void)
{
	int b[1] = {
		98
	};

	print_array(b, 0);
	print_array(b, -1);
	return (0);
}
