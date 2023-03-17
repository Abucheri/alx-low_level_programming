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
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}

	return (0);
}
