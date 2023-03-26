#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of input of line that ll be printed
 */

void print_diagonal(int n)
{
	int dl, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (dl = 0; dl <= n; dl++)
		{
			for (space = 0; space <= dl; space++)
				_putchar(32);
			_putchar(92);
			_putchar('\n');
		}
	}
}
