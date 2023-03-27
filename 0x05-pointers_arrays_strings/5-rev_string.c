#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: reversed string
 */

void rev_string(char *s)
{
	int c, d, e;
	char *a, f;

	a = s;

	while (s[d] != '\0')
	{
		d++;
	}

	for (e = 1; e < d; e++)
	{
		a++;
	}

	for (c = 0; c < (d / 2); c++)
	{
		f = s[c];
		s[c] = *a;
		*a = f;
		a--;
	}
}
