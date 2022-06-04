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
	int MyG = 'a';

	while (MyG <= 'z')
	{
	if (MyG != 'e' && MyG != 'q')

		putchar(MyG);
		MyG++;
	}
	putchar(10);
	return (0);
}
