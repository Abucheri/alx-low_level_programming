#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */


int main(void)
{
	int i, sum, n;
	char c;

	srand(time(NULL));

	sum = 0;
	for (i = 0; sum < 2772 - 122; i++)
	{
		n = rand() % 62;
		if (n < 10)
		{
			c = '0' + n;
		} else if (n < 36)
		{
			c = 'A' + n - 10;
		} else
		{
			c = 'a' + n - 36;
		}

		_putchar(c);
		sum += c;
	}

	_putchar(2772 - sum);
	return (0);
}
