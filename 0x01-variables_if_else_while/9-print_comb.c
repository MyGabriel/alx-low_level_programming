/* Description: Printing alphabets A-Z */
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
* main - set to void
* Return: 0
* Using only putchar but not more than 4
*/

int main(void)
{
	int MyG;

	MyG = '0';
	while
		(MyG <= '9')
	{
		putchar(MyG);
		if (MyG < '9')
			{
			putchar(',');
			putchar(' ');
			}
		MyG++;
	}
	putchar('\n');
	return (0);
}
