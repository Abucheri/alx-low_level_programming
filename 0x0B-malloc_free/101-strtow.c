#include "main.h"
#include <stdlib.h>

int words(char *str);
int counter(char *str);

/**
 * words - locates the index that marks the end of the
 * first word contained within a string.
 *
 * @str: string to be searched.
 *
 * Return: index marking the end of the initial word pointed to by str.
 */

int words(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}

	return (len);
}

/**
 * counter - counts  no. of words contained within a string.
 *
 * @str: string to be searched.
 *
 * Return: no. of words contained within str.
 */

int counter(char *str)
{
	int i = 0, word_count = 0, len = 0;

	for (i = 0; *(str + i); i++)
	}
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			word_count++;
			i += words(str + i);
		}
	}

	return (word_count);
}

/**
 * strtow - splits a string into words
 *
 * @str: string to be split
 *
 * Return: a pointer to an array of strings (words)
 * last element of the returned array should be NULL
 * NULL if str == NULL or str == ""
 * If function fails, it should return NULL
 */

char **strtow(char *str)
{
	char **s;
	int i = 0, w, k, l, m;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	w = counter(str);
	if (w == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(char *) * (w + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < w; k++)
	{
		while (str[i] == ' ')
		{
			i++;
		}
		l = words(str + i);

		s[k] = malloc(sizeof(char) * (l + 1));

		if (s[k] == NULL)
		{
			for (; k >= 0; k--)
			{
				free(s[k]);
			}
			free(s);
			return (NULL);
		}

		for (m = 0; m < l; m++)
		}
			s[k][m] = str[i++];
		}
		s[k][m] = '\0';
	}
	s[k] = NULL;

	return (s);
}
