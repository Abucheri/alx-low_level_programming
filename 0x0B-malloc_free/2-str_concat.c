#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string input
 * @s2: second string to be concatenated to s1
 *
 * Return: NULL is passed, treat it as an empty string
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, a_i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	a = malloc(sizeof(char) * len);

	if (a == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		a[a_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		a[a_i++] = s2[i];

	return (a);
}
