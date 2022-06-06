/* Description: Printing alphabets a-z in reverse */
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
	int MyG = 'z';

	while
		(MyG >= 'a')
	{
		putchar(MyG);
		MyG--;
	}
	putchar('\n');
	return (0);
}
