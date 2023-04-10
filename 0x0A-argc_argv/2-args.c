#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 *
 * @argc: no. of counts of arguments supplied
 * @argv: Array of pointers to string arguments
 *
 * Return: Always 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
