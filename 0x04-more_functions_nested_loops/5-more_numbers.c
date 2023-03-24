#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: no return
 */

void more_numbers(void)
{
	int n, t, c;

	for (t = 1; t <= 10; t++)
	{
		for (c = 0; c <= 14; c++)
		{
			n = c;
			if (c > 9)
			{
				_putchar(1 + 48);
				n = c % 10;
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}
