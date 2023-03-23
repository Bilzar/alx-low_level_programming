#include "main.h"

/**
 * main - Entry piont
 *
 * description: Print the sum of even fibo
 *
 * Return: Always 0 (Success)*/

int main(void)
{
	unsigned long n1 = 0, n2 = 1, s;
	float total_s;

	while (1)
	{
		s = n1 + n2;

		if (s > 4000000)
			break;
		if ((s % 2) == 0)
			total_s += s;

		n1 = n2;
		n2 = s;
	}
	printf("%.0f\n", total_s);

	return (0);
}
