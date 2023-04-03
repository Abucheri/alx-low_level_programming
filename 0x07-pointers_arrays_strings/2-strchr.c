#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: string to be searched
 * @c: character to be searched in string s
 *
 * Return: pointer to first occurence of c in s
 * if not found return NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		} else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
