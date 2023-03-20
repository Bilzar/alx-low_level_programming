#include <stdio.h>
/**
 * main - Entry piont
 * Description: C program that prints lowercase alphabet in reverse
 * Return: always 0 (Success)
*/
int main(void)
{
	int l = 122;

	while (l >= 97)
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
