#include <stdio.h>
/**
 * main - Entry piont
 * Description: C program that prints base 10 digit
 * Return: always 0 (Success)
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
