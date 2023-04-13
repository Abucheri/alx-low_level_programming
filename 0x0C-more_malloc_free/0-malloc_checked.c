#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: bytes to be allocated
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *my_loc;

	my_loc = malloc(b);
	if (my_loc == NULL)
	{
		exit(98);
	}
	return (my_loc);
}
