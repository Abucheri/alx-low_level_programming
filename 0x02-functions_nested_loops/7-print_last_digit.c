#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @ldigi: number's the last digit
 *
 * Return: the value of the last digit
 */

int print_last_digit(int ldigi)
{
	int mydig;

	mydig = (ldigi % 10);

	if (mydig < 0)
	{
		mydig = (-1 * mydig);
	}

	_putchar(mydig + '0');
	return (mydig);
}
