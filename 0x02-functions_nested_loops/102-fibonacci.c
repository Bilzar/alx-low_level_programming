#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	unsigned long n1 = 0, n2 = 1, s;

	for (count = 0; count < 50; count++)
	{
		s = n1 + n2;
		printf("%lu", s);

		n1 = n2;
		n2 = s;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
