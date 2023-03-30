#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @a: string to be encoded
 *
 * Return: encoded string
 */

char *leet(char *a)
{
	int x = 0, b = 0, i = 5;
	char y[5] = {'A', 'E', 'O', 'T', 'L'};
	char z[5] = {'4', '3', '0', '7', '1'};

	while (a[x])
	{
		b = 0;

		while (b < i)
		{
			if (a[x] == y[b] || a[x] - 32 == y[b])
			{
				a[x] = z[b];
			}

			b++;
		}

		x++;
	}

	return (a);
}
