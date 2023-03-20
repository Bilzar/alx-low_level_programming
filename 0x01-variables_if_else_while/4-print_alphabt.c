#include <stdio.h>
/**
 * main - Entry piont
 * Description: C program that print lowercase alphabet except q and e
 * Return: always 0 (Success)
*/
int main(void)
{
	int l = 97;

	while (l <= 122)
	{
		if (l == 101 || l == 113)
		{
			l++;
			continue;
		}
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
