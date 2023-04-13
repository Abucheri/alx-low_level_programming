#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: no. of elements in array
 * @size: size of each element in the array
 *
 * Return: pointer to the allocated memory
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem_loc;
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mem_loc = malloc(size * nmemb);

	if (mem_loc == NULL)
	{
		return (NULL);
	}
	s = mem_loc;

	for (i = 0; i < (size * nmemb); i++)
	{
		s[i] = '\0';
	}
	return (mem_loc);
}
