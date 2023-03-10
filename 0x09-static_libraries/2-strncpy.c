#include "main.h"

/**
 * _strncpy - copies the second string int to the first one
 *
 * @dest: first string
 * @src: second string
 * @n: number of characters to copy from the second string
 *
 * Return: a pointer to the resulting string @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i++] = '\0';
	}

	return (dest);
}
