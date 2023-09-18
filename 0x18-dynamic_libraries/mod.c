#include <stdio.h>

/**
 * mod - returns remainder of division of two no.s
 *
 * @a: first no.
 * @b: second no.
 *
 * Return: remainder of division of a and b
 */

int mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a % b);
}
