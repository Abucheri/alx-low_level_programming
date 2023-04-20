#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters
 *
 * @n: no. of parameters passed
 * @...: variable no. of parameters to be sumed
 *
 * Return: summ of all parameters
 * If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nos;
	unsigned int i, sum = 0;

	va_start(nos, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(nos, int);
	}
	va_end(nos);

	return (sum);
}
