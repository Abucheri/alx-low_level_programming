#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number t fing squareroot for
 *
 * Return: squareroot of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 1)
	{
		return (1);
	}
	return (_sqrt_recursion(n - 1));
}
