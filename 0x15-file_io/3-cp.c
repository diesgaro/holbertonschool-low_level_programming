#include "holberton.h"
/**
 * main - Program that copies the content of a file to another file
 *
 * @ac: Variable type int
 * @av: Pointer to pointer type char
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	int fd_from, fd_to, close_status;
	char buffer[BUFFERSIZE];
	mode_t mod = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	ssize_t r_counter, w_counter;

	if (ac != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(av[1], O_RDONLY);

	if (fd_from == -1)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mod);

	if (fd_to == -1)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);

	r_counter = read(fd_from, buffer, BUFFERSIZE);

	if (r_counter == -1)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);

	w_counter = write(fd_to, buffer, r_counter);

	if (w_counter == -1)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);

	close_status = close(fd_from);

	if (close_status == -1)
		dprintf(SE, "Error: Can't close fd %d\n", close_status), exit(100);

	close_status = close(fd_to);

	if (close_status == -1)
		dprintf(SE, "Error: Can't close fd %d\n", close_status), exit(100);

	return (0);
}
