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
	int i;
	unsigned int du = 0;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		du = 2 * du + (b[i] - '0');
	}
	return (du);
}
