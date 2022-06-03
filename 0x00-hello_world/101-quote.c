/* Description: Pro without printf or puts to the std out. */
#include<stdio.h>
#include<unistd.h>

/**
* main - is set 0
*Return: 1
*/

int main(void)
{
	write(1, "and that piece of art is useful\" -", 34);
	write(1, " Dora Korpar, 2015-10-19\r\n", 25);
	return (1);
}
