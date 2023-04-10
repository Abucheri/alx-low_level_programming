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
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%d\n", argc);
	}
	return (0);
}
