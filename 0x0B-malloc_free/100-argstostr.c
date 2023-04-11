#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: no. of arguments passedto program
 * @av: array of pointers to the arguments
 *
 * Return: NULL if ac == 0 or av == NULL
 * a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *a;
	int b, c, i, d = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c]; c++)
		{
			d++;
		}
	}

	a = malloc(sizeof(char) * d + 1);

	if (a == NULL)
	{
		return (NULL);
	}
	i = 0;

	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c]; c++)
		{
			a[i++] = av[b][c];
		}

		a[i++] = '\n';
	}

	a[d] = '\0';

	return (a);
}
