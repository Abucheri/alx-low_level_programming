#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: alphabet letters printed 10 times
 */

void print_alphabet_x10(void)
{
	char x;
	int num = 0;

	while (num < 10)
	{

		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}

		_putchar('\n');

		num++;
	}
}
