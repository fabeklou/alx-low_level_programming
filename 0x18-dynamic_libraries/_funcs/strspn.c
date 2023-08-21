#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer to the first string
 * @accept: pointer to the second string
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n_byte = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				n_byte++;
				break;
			}
			if (!(accept[i + 1]))
			{
				return (n_byte);
			}
		}
		s++;
	}
	return (n_byte);
}
