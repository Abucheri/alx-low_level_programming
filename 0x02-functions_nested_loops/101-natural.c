#include <stdio.h>

/**
  * main - entry into the program
  * Prints the sum of all multiples of 3 or 5 up to 1024
  *
  * Return: Always 0 for success
  */
int main(void)
{
	int a, b = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b += a;
		}

		a++;
	}

	printf("%d\n", b);
	return (0);
}
