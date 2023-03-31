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

	for (i = 0; i < n; i++)
	{
		n--;
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
