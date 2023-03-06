#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: the string to be scanned
 * @needle: the string to be searched with-in haystack string
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] >= '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0, k = i; needle[j] && needle[j] == haystack[k]; j++, k++)
			{
				if (needle[j + 1] == '\0')
					return (&haystack[i]);
			}
		}
	}
	return ('\0');
}
