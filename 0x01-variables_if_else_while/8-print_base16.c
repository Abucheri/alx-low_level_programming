#include <stdio.h>
/**
 * main - entry point into thr program
 * prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int nums;
	char letters;

	for (nums = 0; nums < 10; nums++)
	{
		putchar((nums % 10) + '0');
	}
	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');

	return (0);
}
