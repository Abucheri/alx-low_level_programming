#include "main.h"

/**
 * _strncpy - copies n characters from source to destination
 *
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to copy
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (dest_start);
}
