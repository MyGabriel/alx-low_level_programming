/* File7: A func that prints the sum of two diagonal of a square metre of int */
#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints sums
 * @a: pointer parametre
 * @size: parametre
 */

void print_diagsums(int *a, int size)
{
	int x, sum_1 = 0, sum_2 = 0;

	for (x = 0; x < size; x++)
	{
		sum_1 += *(a + (size * ix+ x));
		sum_2 += *(a + (size * x + size - 1 - x));
	}
	printf("%d, ", sum_1);
	printf("%d\n", sum_2);
}
