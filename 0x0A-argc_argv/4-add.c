/* File4: A pro that adds positive num */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main func
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a, b, sum;

	sum = 0;

	for (a = 1; a < argc ; a++)
	{
		for (b = 0; argv[a][b] != '\0' ; b++)
		{
			if (argv[a][b] < 47 || argv[a][b] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
