#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * printf - ensures I get jackpot
 *
 * @fmt: first param
 * @...: second param
 *
 * Return: jackpot no.s
 */

int printf(const char *format, ...)
{
	write(1, "9 8 10 24 75 - 9\n",17);
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
