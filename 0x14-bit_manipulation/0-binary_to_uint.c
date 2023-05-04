#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 or 1 chars
 *
 * Return: converted no. or 0
 * if one or more chars in b isn't 0 or 1
 * if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n, i;

	if (!b || *b)
	{
		return (0);
	}
	n = i = 0;
	while (b[i])
	{
		if (b[i] > 49)
			return (0);
		else if (b[i] == 49)
		{
			n <<= 1;
			n += 1;
		} else
			n <<= 1;
		i++;
	}
	return (n);
}
