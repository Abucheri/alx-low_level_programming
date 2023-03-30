#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: string to be appended upon
 * @src: string to be appended to dest
 *
 * Return: a pointer to the output string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, a = 0;

	while (dest[i++])
		a++;

	for (i = 0; src[i]; i++)
		dest[a++] = src[i];

	return (dest);
}
