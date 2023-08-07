#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1,024 bytes to a buffer
 *
 * @file: name of the file the buffer is storing chars for
 *
 * Return: pointer to the newly allocated buffer
 */

char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - closes the file descriptors
 *
 * @fd: file descriptors to be closed
 *
 * Return: Nothing
 */

void close_file(int fd)
{
	int cl;

	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 *
 * @argc: no. of arguments to be passed to the program
 * @argv: array pointer of arguments
 *
 * Return: 0 for success
 * if no. of arguments not correct, exit 97
 * if file_from doesn't exist or you can't read, exit 98
 * if you can't create or write to file_to fails, exit 99
 * if you can't close file descriptors, exit 100
 */

int main(int argc, char *argv[])
{
	int fr, to, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buffer(argv[2]);
	fr = open(argv[1], O_RDONLY);
	r = read(fr, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fr == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		w = write(to, buff, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		r = read(fr, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buff);
	close_file(fr);
	close_file(to);
	return (0);
}
