#include "main.h"

/**
 * _char_count - counts the number of characters into
 * a given string and returns it
 *
 * @str: pointer to the string to be measured
 *
 * Return: number of valid characters in the given string
 */
int _char_count(char *str)
{
	int _char_count;

	for (_char_count = 0; str[_char_count]; _char_count++)
		;
	return (_char_count);
}

/**
 * create_file - creates a file
 *
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to a NULL terminated string
 * to write to the file
 *
 * Return: -1 on failiore and 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int _open, _write;

	if (!filename)
		return (-1);

	_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	_write = write(_open, text_content,
				   text_content ? _char_count(text_content) : 0);

	if (_open == -1 || _write == -1)
		return (-1);

	close(_open);
	return (1);
}
