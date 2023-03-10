#include "main.h"

/**
 * _strcat - pointer to function that concatenates two strings
 *
 * @dest: pointer to the first string
 * @src: pointer to the second string
 *
 * Return: a pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int d_len = 0, s_len = 0, i, j;

	while (dest[d_len] != '\0')
		d_len++;

	while (src[s_len] != '\0')
		s_len++;

	for (i = d_len, j = 0; (i < d_len + s_len) && (j < s_len); i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
