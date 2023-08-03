#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: no. to be converted to binary
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int i, cn = 0;
	unsigned long int curr;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;
		if (curr & 1)
		{
			_putchar('1');
			cn++;
		} else if (cn)
		{
			_putchar('0');
		}
	}
	if (!cn)
	{
		_putchar('0');
	}
}
