/* File0: A pro that prints it's name */
#include "main.h"
#include <stdio.h>

/**
 * main - main func
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
