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
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: pointer to the name of the file to append
 * @text_content: pointer to a NULL terminated string
 * to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int _open, _write;

	if (!filename)
		return (-1);

	_open = open(filename, O_WRONLY | O_APPEND);
	_write = write(_open, text_content,
				   text_content ? _char_count(text_content) : 0);

	if (_open == -1 || _write == -1)
		return (-1);

	close(_open);
	return (1);
}
