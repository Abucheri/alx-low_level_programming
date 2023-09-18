#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @s: the input string
 *
 * Return: Nothing
 */

void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
}
