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
	char MyG;

	srand(time(0));
	MyG = rand() - RAND_MAX / 2;
	MyG = 'a',
	MyG++;
		{
			putchar(MyG);

			while
				(MyG <= 'z');
			putchar('\n');
		}

	return (0);
}
