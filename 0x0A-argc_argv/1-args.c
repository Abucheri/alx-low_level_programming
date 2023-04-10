#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 *
 * @argc: no. of counts of arguments supplied
 * @argv: Array of pointers to string arguments
 *
 * Return: Always 0 for success
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
