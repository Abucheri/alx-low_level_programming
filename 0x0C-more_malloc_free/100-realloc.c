#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size in bytes for the new memory block
 *
 * Return: If new_size > old_size, the “added” memory should
 * not be initialized
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size),
 * for all values of old_size and new_size
 * If new_size is equal to zero, and ptr is not NULL,
 * then the call is equivalent to free(ptr). Return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem_loc;
	char *ptr1, *x;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem_loc = malloc(new_size);

		if (mem_loc == NULL)
			return (NULL);

		return (mem_loc);
	}

	if (new_size == 0 && ptr != NULL)
		free(ptr);
		return (NULL);

	ptr1 = ptr;
	mem_loc = malloc(sizeof(*ptr1) * new_size);

	if (mem_loc == NULL)
		free(ptr);
		return (NULL);

	x = mem_loc;

	for (i = 0; i < old_size && i < new_size; i++)
		x[i] = *ptr1++;

	free(ptr);
	return (mem_loc);
}
