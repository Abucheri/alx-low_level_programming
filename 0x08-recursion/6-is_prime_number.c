#include "main.h"

/**
 * divs - checks divisibility of a number
 *
 * @num: no. to be tested
 * @i: divisor
 *
 * Return: if number is divisible return 0
 * if not return -1
 */

int divs(int num, int i)
{
	if (num % i == 0)
		return (0);

	if (i == num / 2)
		return (1);

	return (divs(num, i + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n: no to be checked
 *
 * Return: returns 1 if n is prime
 * 0 if n is not a prime
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (divs(n, i));
}
