#include "main.h"

/**
 * main - Entry piont
 *
 * Description: computes and prints the sum
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int s, n;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			s += n;
	}
	printf("%d\n", s);

	return (0);
}
