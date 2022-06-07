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

	My = '0';
	while
		(My <= '9')
	{
		putchar(My);
		if (My < '9')
			{
			putchar(',');
			putchar(' ');
			}
		My++;
	}
	putchar('\n');
	return (0);
}
