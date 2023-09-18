#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: the string to search
 * @accept: the string containing characters to match
 *
 * Return: number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;

	while (*s)
	{
		found = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				found = 1;
				break;
			}
			accept++;
		}
		if (found == 0)
			break;
		s++;
		accept = accept - count;
	}
	return (count);
}
