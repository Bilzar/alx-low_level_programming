#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: input first int
 *
 * @b: input second int
 *
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

