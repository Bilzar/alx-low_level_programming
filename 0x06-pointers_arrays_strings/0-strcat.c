#include "main.h"

/**
 * *_strcat - A function appends the src string to the dest string
 *
 * @dest: pionter to destnation input
 * @src: pionter to source input
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
		c++;

	for (c2 = 0; src[c2] ; c2++)

		dest[c++] = src[c2];

	return (dest);
}
