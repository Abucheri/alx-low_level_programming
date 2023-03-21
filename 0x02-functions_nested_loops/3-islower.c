#include "main.h"

/**
 * _islower - entry point into the program
 * checks for lowercase character.
 *
 * @c: single letter input
 *
 * Return: 1 if int c is lowercase, returns 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
