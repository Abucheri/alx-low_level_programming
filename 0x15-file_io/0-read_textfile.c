#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 *
 * @filename: pointer to the name of the file to be read
 * @letters: no. of letters to read and print
 *
 * Return: actual no. of letters to read and print
 * if file can't be opened or read, 0
 * if fileneme is NULL, 0
 * if write fails or doesn't write expected amount of bytes, 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *b;

	if (filename == NULL)
	{
		return (0);
	}
	b = malloc(sizeof(char) * letters);
	if (b == NULL)
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	r = read(o, b, letters);
	w = write(STDOUT_FILENO, b, r);
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(b);
		return (0);
	}
	free(b);
	close(o);
	return (w);
}
