#include "main.h"
#include <stdio.h>

/**
 * _copy_file - copies the content of src into dest
 *
 * @src: pointer to the source string
 * @dest: pointer to the destination string
 *
 * Return: nothing
 */
void _copy_file(char *src, char *dest)
{
	int ofd, tfd, _read;
	char buffer[1024];

	ofd = open(src, O_RDONLY);

	if (!src || ofd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	tfd = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((_read = read(ofd, buffer, 1024)) > 0)
	{
		if (write(tfd, buffer, _read) != _read || tfd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(ofd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ofd);
		exit(100);
	}

	if (close(tfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tfd);
		exit(100);
	}
}

/**
 * main - entry point
 *
 * description: copies the content of a file to another file
 *
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success, 97, 98, 99 or 100 on failure
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from dile_to\n");
		exit(97);
	}

	_copy_file(argv[1], argv[2]);
	return (0);
}
