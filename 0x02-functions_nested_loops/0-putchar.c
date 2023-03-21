#include "AO_headers.h"

/**
 * main - entry point into the program
 *
 * Return: always 0 for success
 */

int main(void)
{
	char my_chars = "_putchar";

	while (my_chars)
	{
		_putchar(my_chars);
		my_chars++;
	}

	_putchar("\n");

	return (0);
}
