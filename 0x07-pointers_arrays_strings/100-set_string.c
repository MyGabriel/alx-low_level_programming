/* File8: A func to set a value of a pointer to a char */
#include "main.h"
#include <stdio.h>

/**
 * set_string - sets value to char
 * @s: double pointer
 * @to: pointer
 */

void set_string(char **s, char *to)
{
	*s = to;
}
