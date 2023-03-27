#include "main.h"

/**
 * _strlen -  returns the length of a string
 *
 * @s: string character to count length
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int x = 0;

	for (; *s != '\0'; s++)
	{
		x++;
	}

	return (x);
}
