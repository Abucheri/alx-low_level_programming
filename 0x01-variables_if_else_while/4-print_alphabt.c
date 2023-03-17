#include <stdio.h>
/**
 * main - Entry point into the program
 * prints the alphabet in lowercase, followed by a new line.
 * except q and e
 *
 * Return: Always 0 for success
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters != 'e' && letters != 'q')
		{
			putchar(letters);
		}
	}
	putchar('\n');

	return (0);
}
