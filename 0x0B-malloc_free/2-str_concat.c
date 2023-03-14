#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: a pointer to character or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k = 0;
	char *str_cat = NULL;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; *(s1 + i); i++)
			;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; *(s2 + j); j++)
			;
	}

	str_cat = (char *)malloc((sizeof(char) * (i + j)) + 1);

	if (str_cat == NULL)
		return (NULL);

	for (k = 0; *(s1 + k); k++)
		*(str_cat + k) = *(s1 + k);

	for (i = 0; *(s2 + i); k++, i++)
		*(str_cat + k) = *(s2 + i);

	*(str_cat + k) = '\0';

	return (str_cat);
}
