/* File: A func that print every minute of the day */
#include "main.h"

/**
 * jack_bauer - prints time
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int s, t;

	for (s = 0; s < 24; s++)
	{
		for (t = 0; t < 60; t++)
		{
			_putchar(s / 10 + 48);
			_putchar(s % 10 + 48);
			_putchar(':');
			_putchar(t / 10 + 48);
			_putchar(t % 10 + 48);
			_putchar('\n');
		}
	}
}
