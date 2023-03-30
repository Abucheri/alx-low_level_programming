#include "main.h"

/**
 * add_strings - Adds the numbers stored in two strings.
 * @n1: first number to be added, never empty.
 * @n2: second number to be added, never empty.
 * @r: buffer to store the result.
 * @i: current index of the buffer.
 *
 * Return: sum of n1 and n2
 */

char *add_strings(char *n1, char *n2, char *r, int i)
{
	int a, b = 0;

	for (; *n1 && *n2; n1--, n2--, i--)
	{
		a = (*n1 - '0') + (*n2 - '0');
		a += b;
		*(r + i) = (a % 10) + '0';
		b = a / 10;
	}

	for (; *n1; n1--, i--)
	{
		a = (*n1 - '0') + b;
		*(r + i) = (a % 10) + '0';
		b = a / 10;
	}

	for (; *n2; n2--, i--)
	{
		a = (*n2 - '0') + b;
		*(r + i) = (a % 10) + '0';
		b = a / 10;
	}

	if (b && i >= 0)
	{
		*(r + i) = (b % 10) + '0';
		return (r + i);
	}

	else if (b && i < 0)
		return (0);

	return (r + i + 1);
}

/**
 * infinite_add - adds two numbers
 *
 * @n1: first nmber, never empty
 * @n2: second number, never empty
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 *
 * Return: sum of n1 and n2
 * if the result can not be stored in r
 * the function must return 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, n1_len = 0, n2_len = 0;

	for (i = 0; *(n1 + i); i++)
		n1_len++;

	for (i = 0; *(n2 + i); i++)
		n2_len++;

	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
