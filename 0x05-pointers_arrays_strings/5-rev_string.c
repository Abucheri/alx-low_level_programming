#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: reversed string
 */

void rev_string(char *s)
{
	char ch, *p, *q;

	for (q = s; *q != '\0'; ++q)
	{
		;
	}
	if (q > s)
	{
		--q;
	}

	for (p = s; p < q; ++p, --q)
	{
		ch = *p;
		*p = *q;
		*q = ch;
	}
	return (s);
}
