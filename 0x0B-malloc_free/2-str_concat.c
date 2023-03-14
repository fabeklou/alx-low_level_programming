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
	int i = 0, j = 0, k = 0, l = 0;
	char *str_cat = NULL;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	str_cat = (char *)malloc((sizeof(char) * (i + j)) + 1);

	if (str_cat == NULL)
		return (NULL);

	while (s1[k])
	{
		str_cat[k] = s1[k];
		k++;
	}

	while (s2[l])
	{
		str_cat[k] = s2[l];
		k++;
		l++;
	}

	str_cat[k] = '\0';

	return (str_cat);
}
