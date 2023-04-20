#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 *
 * @seperator: string to be printed btwn no.s
 * @n: no. of integers passed to the function
 * @...: variable number of numbers to be printed
 *
 * Return: prints numbers
 * If separator is NULL, don’t print it
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nos;
	unsigned int i;

	va_start(nos, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nos, int));
		if (i != (n - 1) && seperator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(nos);
}
