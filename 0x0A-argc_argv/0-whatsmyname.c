#include <stdio.h>

/**
 * main - a program that prints its name
 *
 * @argc: no. of counts of arguments supplied
 * to program
 * @argv: Array of pointers to string arguments
 *
 * Return: Always 0 for success
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
