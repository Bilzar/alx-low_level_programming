#include <stdio.h>
/**
 * main - Entry piont
 * Description: C program that prints base 16 digit
 * Return: always 0 (Success)
*/
int main(void)
{
	int n;
	int l;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (l = 97; l <= 102; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
