#include "main.h"

/**
 * _strcpy -  a function that copies the string pointed to by src
 * @dest: destination value input
 * @src: source value input
 * Return: the pionter to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
