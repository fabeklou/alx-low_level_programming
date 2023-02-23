#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: the number to be checked
 *
 * Return: (1) if the input is a digit (0) otherwise
 */
int _isdigit(int c)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
