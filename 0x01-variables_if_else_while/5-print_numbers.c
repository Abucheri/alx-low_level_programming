#include <stdio.h>
/**
 * main - Entry point into the program
 * prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int nums;

	for (nums = 0; nums < 10; nums++)
	{
		printf("%d", nums);
	}
	printf("\n");

	return (0);
}
