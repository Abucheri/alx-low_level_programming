#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 *
 * @argc: no. of counts of arguments supplied
 * @argv: Array of pointers to string arguments
 *
 * Return: If no number is passed to the program, print 0
 * If one of the number contains symbols that are not digits, print Error
 * and return 1
 */

int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[a]);
	}

	printf("%d\n", sum);

	return (0);
}
