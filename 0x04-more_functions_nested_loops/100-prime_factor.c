#include <stdio.h>
#include <math.h>

/**
 * main - entry point into the program
 * finds and prints the largest prime factor of the number
 * 612852475143, followed by a new line
 *
 * Return: always 0 for success
 * largest prime factor of the number 612852475143
 */

int main(void)
{
	int x;
	long num = 612852475143;

	for (x = (int) sqrt(num); x > 2; x++)
	{
		if (num % x == 0)
		{
			printf("%d\n", x);
			break;
		}
	}

	return (0);
}
