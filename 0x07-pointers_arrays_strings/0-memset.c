#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pionter
 * @b: constant
 * @n: max byte to use
 * Return: to pionter s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
