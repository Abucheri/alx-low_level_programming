#include <stdio.h>

void __attribute__((constructor)) _runf(void);

/**
 * _runf - prints a string before execution of main
 */

void _runf(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
