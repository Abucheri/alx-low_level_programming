#include "main.h"

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
