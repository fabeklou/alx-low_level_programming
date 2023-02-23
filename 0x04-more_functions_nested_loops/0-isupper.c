#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: the character to be checked
 *
 * Return: 1 if the input is an uppercase, 0 otherwise
 */
int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
