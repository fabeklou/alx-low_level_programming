#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 *
 * @str: the string to be encoded
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *str)
{
	int i, j;

	char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
						'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
						'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd',
						'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
						'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
						'y', 'z', '\0'};

	char rot_13[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
						'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
						'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
						'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
						'j', 'k', 'l', 'm', '\0'};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; alphabet[j]; j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot_13[j];
				break;
			}
		}
	}
	return (str);
}
