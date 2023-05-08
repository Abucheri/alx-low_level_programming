#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: pointer to the name of the file to append to
 * @text_content: pointer to the NULL terminated string to add
 * at the end of the file
 *
 * Return: 1 for success
 * -1 for failure
 *  if filename is NULL, -1
 *  if text_content is NULL, don't do anything to the file
 *  1 if file exists
 *  -1 if file doesn't exist or you don't have the required
 *  permissions to write to teh file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}
