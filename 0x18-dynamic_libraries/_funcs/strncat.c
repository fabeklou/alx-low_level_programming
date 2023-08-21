#include "main.h"

/**
 * _strncat - pointer to a function that concatenates two strings
 *
 * @dest: pointer to the first string
 * @src: pointer to the second string
 * @n: maximum number of characters to be concatenate
 *
 * Return: a pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d_len = 0, i, j;

	while (dest[d_len] != '\0')
	{
		d_len++;
	}

	for (i = d_len, j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
