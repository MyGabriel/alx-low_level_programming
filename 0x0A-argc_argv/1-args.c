/* File1: A pro that prints num of arg pass to it */
#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always to 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	argc--;
	printf("%d\n", argc);
	return (0);
}
