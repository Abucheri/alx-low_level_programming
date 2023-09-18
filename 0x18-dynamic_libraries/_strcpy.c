#include "main.h"

/**
 * _strcpy - copies a string to a destination buffer
 *
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: the pointer to the destination buffer
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
