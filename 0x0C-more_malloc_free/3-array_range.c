#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: min range of values stored in array
 * @max: max range of values stored in array
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *a;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	a = malloc(sizeof(int) * size);

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		a[i] = min++;
	}
	return (a);
}
