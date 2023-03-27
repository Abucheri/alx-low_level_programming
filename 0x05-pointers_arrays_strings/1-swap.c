#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: integer input to swap
 * @b: integer input to swap
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
