#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 *
 * @filename: a pointer to the file to be used
 * @letters: the number of letters it should read and print
 *
 * Return: 0 if an error accured otherwise, the number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t _open, _read, _write;
	char *buffer;

	if (!filename)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	_open = open(filename, O_RDONLY);
	_read = read(_open, buffer, letters);
	_write = write(STDOUT_FILENO, buffer, _read);

	if (_open == -1 || _read == -1 || _write == -1 || _read != _write)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(_open);

	return (_write);
}
