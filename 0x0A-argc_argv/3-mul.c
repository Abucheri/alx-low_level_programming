#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 *
 * @argc: no. of counts of arguments supplied
 * @argv: Array of pointers to string arguments
 *
 * Return: print Error if program does not receive two arguments
 * followed by a new line, and return 1
 */

int main(int argc, char *argv[])
{
	int a, b, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mult = a * b;

	printf("%d\n", mult);

	return (0);
}
