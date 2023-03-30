#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: string to be appended on
 * @src: string to append to dest
 * @n: no. of bytes from src to append to dest
 *
 * Return: pointer to resulting string of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, a = 0;

	while (dest[i++])
		a++;

	for (i = 0; src[i] && i < n; i++)
		dest[a++] = src[i];

	return (dest);
}
