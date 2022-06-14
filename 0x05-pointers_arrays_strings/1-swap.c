/* File1: Swapping two pointers */
#include "main.h"

/**
* swap_int - the func for the swap
* @a: pointer to a
* @b: ponter to b
* Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int swap_;

	swap_ = *a;
	*a = *b;
	*b = swap_;
	/* Each variable can represent the other two variables */
}
