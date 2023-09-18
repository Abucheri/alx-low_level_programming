#include "main.h"

/**
 * _strncat - concatenates n characters from source to destination
 *
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to concatenate
 *
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest)
		dest++;
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (dest_start);
}
