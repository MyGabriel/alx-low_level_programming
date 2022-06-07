/* Description: Printing alphabets 123 */
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
	int My;

	My = 0;
	while
		(My <= 89)
	{
		if (My < 90)
		{
			putchar((My / 10) + '0');
			putchar((My % 10) + '0');
			putchar(',');
			putchar(' ');
		}
		My++;
	}
	putchar(10);
	return (0);
}
