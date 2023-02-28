#include <stdio.h>

/**
 * _strlen - returns le length of a string
 *
 * @s: a pointer to the string
 *
 * Return: the length of the given string
 */
int _strlen(char *s)
{
	int length = 0;

	do {
		if (s[length])
			length++;
		else
			return (length);

	} while (1);
}
