#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
	int l;

	for (l = 97; l <= 122; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
