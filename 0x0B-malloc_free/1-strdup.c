#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 *
 * @str: string to be duplicated
 *
 * Return: NULL if str = NULL
 * if success, a pointer to the duplicated string
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *twice;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		len++;
	}
	twice = malloc(sizeof(char) * (len + 1));

	if (twice == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		twice[i] = str[i];
	}
	twice[len] = '\0';

	return (twice);
}
