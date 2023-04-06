#include "main.h"

/**
 * _sqrt_recursion - Find the natural square root of a number
 * @n: int input
 * @sr: square root
 * Return: int
 */

int _sqrt(int n, int sr);

int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * _sqrt - find square root
 * @n: int input
 * @sr: square root
 * Return: int
 */

int _sqrt(int n, int sr)
{
	int sqrt = sr * sr;

	if (sqrt > n)
		return (-1);

	else if (sqrt == n)
		return (sr);

	return (_sqrt(n, sr + 1));
}
