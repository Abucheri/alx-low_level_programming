#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: Always 0 for success
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}

	for (letters = 'A'; letters <= 'Z'; letters++)
	{
		putchar(letters);
	}

	putchar('\n');

	return (0);
}
