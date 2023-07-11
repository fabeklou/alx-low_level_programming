#include "main.h"

#define BUFF_SIZE 1024

/**
 * _file_to_failed - prints error relative to the target file and exit
 *
 * @file_to: name of the target file
 *
 * Return: nothing
 */
void _file_to_failed(char *file_to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	exit(99);
}

/**
 * _file_from_failed - prints error relative to the source file and exit
 *
 * @file_from: name of the source file
 *
 * Return: nothing
 */
void _file_from_failed(char *file_from)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}

/**
 * _fd_close_failed - prints error on closing file description and exit
 *
 * @fd: the file description
 *
 * Return: nothing
 */
void _fd_close_failed(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - entry point
 *
 * description: copies the content of a file into another file
 *
 * @ac: number of command line arguments
 * @av: array of command line arguments (strings)
 *
 * Return: 0 on success, 97 to 100 on failure
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, fd_to_close, fd_from_close;
	char buffer[BUFF_SIZE + 1];
	ssize_t char_read, char_copied;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	char_read = read(fd_from, buffer, BUFF_SIZE);
	char_copied = write(fd_to, buffer, char_read);

	buffer[char_read] = '\0';

	if (fd_from == -1 || char_read == -1)
		_file_from_failed(av[1]);
	if (fd_to == -1 || char_copied == -1)
		_file_to_failed(av[2]);

	fd_from_close = close(fd_from);
	fd_to_close = close(fd_to);

	if (fd_to_close == -1)
		_fd_close_failed(fd_to);
	if (fd_from_close == -1)
		_fd_close_failed(fd_from);

	return (0);
}
