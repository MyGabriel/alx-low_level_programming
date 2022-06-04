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
	int MyG;

	srand(time(0));
	MyG = rand() - RAND_MAX / 2;
	for
		(MyG = 'a'; MyG <= 'z';)
		{
			putchar(MyG);
			MyG++;
		}
	putchar('\n');
	return (0);
}
