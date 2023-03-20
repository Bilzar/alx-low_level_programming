#include <stdio.h>
/**
 * main - Entry piont
 * Description: C program that prints lowercase and then upercase alphabet
 * Return: always 0 (Success)
*/
int main(void)
{
	int l = 97;
	int u = 65;

	while (l <= 122)
	{
		putchar(l);
		l++;
	}
	while (u <= 90)
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
