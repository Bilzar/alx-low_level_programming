#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * @n: an array of integer
 * @n: the number of elements to swap
 *
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int i, t;

	for (i = n - 1; i >= n / 2; i--)
	{
	t = a[n - 1 - i];
	a[n - 1 - i] = a[i];
	a[i] = t;
	}
}
