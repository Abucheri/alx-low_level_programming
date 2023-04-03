#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: memory area where n bytes are copied to
 * @src: memory area where n bytes are copied from
 * @n: bytes from src copied to dest
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
