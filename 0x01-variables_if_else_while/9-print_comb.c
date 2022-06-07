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
	int MyG = '0';

	while
		(MyG <= '9')
	{
		putchar(MyG);
		MyG++;
	if(MyG == '9')
		continue;
		putchar(',');
		putchar(' '); 
	}
	putchar('\n');
	return (0);
}
