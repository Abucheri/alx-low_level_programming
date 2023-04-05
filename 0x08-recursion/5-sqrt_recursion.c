#include "main.h"

/**
 * my_sqrt - finds natural square root
 *
 * @num: number to find sqrt for
 * @r: the root to use
 *
 * Return: if no. has nutural square root, return the square root
 * if no. doesn't have natural square, return -1
 */

int my_sqrt(int num, int r)
{
	if ((r * r) == num)
		return (r);

	if (r == num / 2)
		return (-1);

	return (my_sqrt(num, r + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number t fing squareroot for
 *
 * Return: squareroot of n
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
	{
		return (-1);
	} else if (n == 1)
	{
		return (1);
	}
	return (my_sqrt(n, r));
}
