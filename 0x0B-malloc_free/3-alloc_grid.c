#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: NULL on failure
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int h_i, w_i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		return (NULL);
	}
	for (h_i = 0; h_i < height; h_i++)
	{
		a[h_i] = malloc(sizeof(int) * width);

		if (a[h_i] == NULL)
		{
			for (; h_i >= 0; h_i--)
			{
				free(a[h_i]);
			}
			free(a);
			return (NULL);
		}
	}

	for (h_i = 0; h_i < height; h_i++)
	{
		for (w_i = 0; w_i < width; w_i++)
		{
			a[h_i][w_i] = 0;
		}
	}

	return (a);
}
