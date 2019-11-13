#include "holberton.h"
/**
 * create_file - Function that creates a file
 *
 * @filename: Pointer type char
 * @text_content: Pointer type char
 *
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t w_counter;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

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
