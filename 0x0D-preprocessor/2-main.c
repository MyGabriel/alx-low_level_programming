/* File2: A pro that print the of a file printed from */
#include <stdio.h>

/**
 * main - print the name of the file it was compiled from
 *
 * Return: the name of the file
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
