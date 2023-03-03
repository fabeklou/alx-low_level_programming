#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: the string to be encoded
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;

	char lower[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char upper[] =  {'A', 'E', 'O', 'T', 'L', '\0'};
	char to_leet[] = {52, 51, 48, 55, 49, '\0'};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; lower[j]; j++)
			if ((str[i] == lower[j]) || (str[i] == upper[j]))
				str[i] = to_leet[j];
	}

	return (str);
}
