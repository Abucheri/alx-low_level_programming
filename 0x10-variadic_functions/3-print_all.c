#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - prints a char
 *
 * @chr: list of arguments pointing to
 * the character to be printed
 */

void print_char(va_list chr)
{
	char l;
	
	l = va_arg(chr, int);
	printf("%c", l);
}

/**
 * print_int - prints an int
 *
 * @ints: list of arguments pointing to
 * the integer to be printed
 */

void print_int(va_list ints)
{
	int n;
	
	n = va_arg(ints, int);
	printf("%d", n);
}

/**
 * print_float - prints a float
 *
 * @fl: list of arguments pointing to
 * the float to be printed
 */

void print_float(va_list fl)
{
	float a;
	
	a = va_arg(fl, double);
	printf("%f", a);
}

/**
 * print_string - prints a string
 *
 * @strs: list of arguments pointing to
 * the string to be printed
 */

void print_string(va_list strs)
{
	char *s;
	
	s = va_arg(strs, char *);
	
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything
 *
 * @format: string of characters representing the argument types
 * @...: variable number of arguments to be printed
 *
 * Return: any argument
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	
	va_start(args, format);
	
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
		{
			j++;
		}
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
