#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks fo uppercase letters
 *
 * @c: character input
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
