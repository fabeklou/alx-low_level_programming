#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: the string to be changed
 *
 * Return: A pointer to the changed string
 */
char *cap_string(char *str)
{
	int i, j;
	char sep[] = {32, '\t', '\n', 44, ';', 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; str[i]; i++)
	{
		if (i == 0)
		{
			if (str[0] >= 'A' && str[0] <= 'Z') 
				continue;

			str[0] -= 32;
		}

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			for (j = 0; sep[j]; j++)
			{
				if (sep[j] == str[i - 1])
					str[i] -= 32;
			}
		}
	}
	return (str);
}
