#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase
 *
 * @str: the string to be changed
 *
 * Return: a pointer to the pointed string
 */
char *string_toupper(char *str)
{
	int i = 0;
	char j;

	while (str[i])
	{
		j = 97;

		while (j <= 122)
		{
			if (j == str[i])
				str[i] = j - 32;
			j++;
		}

		i++;
	}
	return (str);
}
