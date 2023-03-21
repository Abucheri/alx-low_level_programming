#include "main.h"

/**
 * print_alphabet - entry point into the program
 * prints the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return 0 fot success
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}
