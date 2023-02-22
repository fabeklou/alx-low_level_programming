#include "main.h"

/**
 * _isalpha - checks for letter
 *
 * @c: The character to be checked
 *
 * Return: '1' if c is a letter, lowercase or uppercase and '0' otherwise
 */
int _isalpha(int c);
{
	char i, j;

	for (i = 'a', j = 'A'; i <= 'z' && j <= 'Z'; i++, j++)
	{
		if (c == i || c == j)
			return (1);
	}
	return (0);
}
