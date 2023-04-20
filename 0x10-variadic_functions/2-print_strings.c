#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 *
 * @separator: string to be printed between strings
 * @n: no. of strings passed to function
 * @...: variable number of strings to be printed
 *
 * Return: strings
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *s;
	unsigned int i;

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strs, char *);

		if (s == NULL)
		{
			printf("(nil)");
		} else
		{
			printf("%s", s);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strs);
}
