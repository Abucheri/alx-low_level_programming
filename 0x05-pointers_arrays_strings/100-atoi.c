#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: string to be coverted
 *
 * Return: converted string
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int a = 0;
	int z = 1;
	int t = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			z *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			t = 1;
			a = (a * 10) + (s[c] - '0');
			c++;
		}

		if (t == 1)
		{
			break;
		}

		c++;
	}

	a *= z;
	return (a);
}
