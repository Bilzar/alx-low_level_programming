#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: number input
 * Return: int value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
