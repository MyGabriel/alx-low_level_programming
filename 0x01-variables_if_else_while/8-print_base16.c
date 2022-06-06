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
	char MyG1 = 'a';

	while
		(MyG <= '9')
	{
		putchar(MyG);
		MyG++;
	}
	while
		(MyG1 <= 'f')
	{
		putchar(MyG1);
		MyG1++;
	}
	putchar('\n');
	return (0);
}
