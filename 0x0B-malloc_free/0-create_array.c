#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char
 *
 * @size: size of the array to be initialized
 * @c: char to initialize array with
 *
 * Return: NULL if size = 0
 * a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * size);

	if (a == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		a[x] = c;
	}
	return (a);
}
