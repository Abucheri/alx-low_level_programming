#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: name of array
 * @size: size of array
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int b = 0;
	int c = size - 1;
	int sum_one = 0;
	int sum_two = 0;

	while (b <= (size * size))
	{
		sum_one += a[b];
		b = b + size + 1;
	}

	while (c < (size * size - 1))
	{
		sum_two += a[c];
		c = c + size - 1;
	}

	printf("%d, %d\n", sum_one, sum_two);
}
