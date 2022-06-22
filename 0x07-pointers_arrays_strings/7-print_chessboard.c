#include "main.h"
/**
 * print_chessboard - chessboard
 * @a: parram
 */

void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(*(*(x + a) + y));
		}
	_putchar('\n');
	}
}
