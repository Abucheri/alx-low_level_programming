#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - entry point
 * print the first 98 fib numbers starting with 1 and 2
 *
 * Return: 0 for success
 */
int main(void)
{
	unsigned long int a = 0, b = 1, a1 = 0, b1 = 2;
	unsigned long int c, d, e;
	int count;

	printf("%lu, %lu, ", b, b1);
	for (count = 2; count < 98; count++)
	{
		if (b + b1 > LARGEST || a1 > 0 || a2 > 0)
		{
			c = (b + b1) / LARGEST;
			d = (b + b1) % LARGEST;
			e = a + a1 + c;
			a = a1, a1 = e;
			b = b1, b1 = d;
			printf("%lu%010lu", a1, b1);
		}
		else
		{
			d = b + b1;
			b = b1, b1 = d;
			printf("%lu", b1);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
