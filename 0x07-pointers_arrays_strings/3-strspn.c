#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: initial segment to return bytes from
 * @accept: bytes to be included
 *
 * Return: no. of bytes in initial segment s
 * consists of only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
				{
					c++;
				}
			}
		} else
		{
			return (c);
		}

	}
	return (c);
}
