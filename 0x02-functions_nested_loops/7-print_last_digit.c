#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: Input number as integer
 *
 * Return: Last digit
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
	{
		_putchar(-r + 48);
		return (-r);
	}
	else
	{
		_putchar(r + 48);
		return (r);
	}
}
