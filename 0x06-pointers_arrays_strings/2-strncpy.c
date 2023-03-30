#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: the buffer storing the string copy
 * @src: the string
 * @n: max no. of bytes to be coped from src
 *
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, a = 0;

	while (src[i++])
		a++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = a; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
