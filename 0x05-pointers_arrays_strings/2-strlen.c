#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: input of string
 *
 * Return: the lenght of @s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
