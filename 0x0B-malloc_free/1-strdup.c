#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: the string to copy
 *
 * Return: a pointer to character
 */
char *_strdup(char *str)
{
	int i, j;
	char *str_cpy = NULL;

	if (str == NULL)
		return (NULL);

	for (i = 0; *(str + i); i++)
		;

	str_cpy = (char *)malloc(sizeof(char) * i);

	if (str_cpy == NULL)
		return (NULL);

	for (j = 0; *(str + j); j++)
		*(str_cpy + j) = *(str + j);

	return (str_cpy);
}
