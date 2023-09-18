#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to memory area
 * @b: constant byte to fill
 * @n: number of bytes to fill
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (start);
}
