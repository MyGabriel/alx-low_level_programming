/* Description: The last digit of n */
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
	printf("Last digit of %d", n);
	if (n > 5)
		printf("is 8 and is greater than 5\n", n);
	else if (n == 0)
		printf("is 0 and is 0\n", n);
	else if (n < !6)
		printf("is -8 and is less than 6 and not 0\n", n);

return (0);
}
