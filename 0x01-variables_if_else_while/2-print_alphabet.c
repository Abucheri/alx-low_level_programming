#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 for success
 */
int main(void)
{
	char low_letter;

	for (low_letter = 'a'; low_letter <= 'z'; low_letter++)
	{
		putchar(low_letter);
		putchar('\n');
	}
	return (0);
}
