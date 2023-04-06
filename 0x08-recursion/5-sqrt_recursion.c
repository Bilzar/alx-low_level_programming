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
	if (sr * sr == n)
		return (sr);
	else if (sr * sr < n)
		return (_sqrt(n, sr + 1));
	else
		return (-1)
}
