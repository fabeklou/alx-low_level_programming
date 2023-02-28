#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, length = 0;
	char temp;

	while (s[length])
	{
		length++;
	}

	i = length - 1;
	j = 0;

	while (i > j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
		i--;
	}

}
