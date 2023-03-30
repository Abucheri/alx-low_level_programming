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
	int i1 = 0, i2;
	char l[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (a[i1])
	{
		for (i2 = 0; i2 <= 7; i2++)
		{
			if (a[i1] == l[i2] ||
			    a[i1] - 32 == l[i2])
				a[i1] = i2 + '0';
		}

		i1++;
	}

	return (a);
}
