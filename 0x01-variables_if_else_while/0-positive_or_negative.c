/* Description: Testing for positive or negative */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - set to void
* Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* My code */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
