#include "main.h"

/**
 * _atoi - convert a string
 * @s: pionter input
 * Return: an integer
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int pos = 0;

	while (s[c])
	{
	if (s[c] == 45)
	{
	min *= -1;
	}
	while (s[c] >= 48 && s[c] <= 57)
	{
	pos = 1;
	ni = (ni * 10) + (s[c] - '0');
	c++;
	}
	if (pos == 1)
	{
	break;
	}
	c++;
	}
	return (ni);

}
