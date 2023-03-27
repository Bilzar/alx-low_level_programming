#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: string input
 *
 * Return: no return
 */
void print_rev(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	{
	r++;
	}

	for (r -= 1; r >= 0; r--)
	{
	_putchar(s[r]);
	}
	_putchar('\n');
}
