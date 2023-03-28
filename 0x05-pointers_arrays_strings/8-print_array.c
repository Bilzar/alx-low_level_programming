#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array input
 * @n: number of element input
 * Return: no return
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
