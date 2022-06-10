/* File100: The biggest prime factor */
#include <stdio.h>
#include <math.h>

/**
  * main - the largest prime factor of the number 612852475143
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	long p, bigx;
	long number = 612852475143;
	double square = sqrt(number);

	for (p = 1; p <= square; p++)
	{
		if (number % p == 0)
		{
			bigx = number / p;
		}
	}

	printf("%ld\n", maxf);

	return (0);
}
