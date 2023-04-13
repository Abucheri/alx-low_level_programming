#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string input to concatenate to
 * @s2: second string input to concatenate from
 * @n: max no. of bytes from s2 to to concatenate to s1
 *
 * Return: pointer to a newly allocated space in memory
 * containing s1 followed by the first n bytes of s2
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2
 * then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len = n, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
		len++;

	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	len = 0;

	for (i = 0; s1[i]; i++)
	{
		s[len++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		s[len++] = s2[i];
	}
	s[len] = '\0';

	return (s);
}
