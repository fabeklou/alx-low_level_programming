#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
