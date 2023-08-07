#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: pointer to the file name of the file to create
 * @text_content: pointer to the text content to write on the file
 *
 * Return: on success, 1
 * if failed, -1
 * if filename is NULL, -1
 * if text_content is NULL, create empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);
	if (fd == -1 || w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
