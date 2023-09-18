#include <stdio.h>

/**
 * div - returns division result of two no.s
 *
 * @a: first no.
 * @b: second no.
 *
 * Return: division result of a and b
 */

int div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}
