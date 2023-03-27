#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: int pointer for integer arrays
 * @n: integer input for number of elements
 *
 * Return: n elements of an array of integers
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
