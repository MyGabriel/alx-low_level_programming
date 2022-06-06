/* Description: Printing alphabets A-Z */
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
* main - set to void
* Return: 0
* Using only putchar but not more than 2
*/

int main(void)
{
	int MyG = 1;

	while (MyG <= 9)
	{
		printf("%d\n", MyG);
		MyG++;
	}
	return (0);
}
