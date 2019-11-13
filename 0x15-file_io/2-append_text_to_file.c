#include "holberton.h"
/**
 * append_text_to_file - Function that appends text at the end of a file
 *
 * @filename: Pointer type char
 * @text_content: Pointer type char
 *
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t w_counter;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;

		w_counter = write(fd, text_content, len);

		if (w_counter == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
