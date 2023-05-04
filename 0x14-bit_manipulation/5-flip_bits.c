#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 *
 * @n: 1st no.
 * @m: 2nd no.
 *
 * Return: buts required to flop from one no. to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cn = 0;
	unsigned long int curr;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = x >> i;
		if (curr & 1)
		{
			cn++;
		}
	}
	return (cn);
}
