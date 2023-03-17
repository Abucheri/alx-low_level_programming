#include <stdio.h>
/**
 * main - Entry point into the program
 * prints the lowercase alphabet in reverse
 *
 * Return: Always 0 for success
 */
int main(void)
{
	char back;

	for (back = 'z'; back >= 'a'; back--)
	{
		putchar(back);
	}
	putchar('\n');

	return (0);
}
