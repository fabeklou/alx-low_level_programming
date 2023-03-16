#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of character to copy from @s2
 *
 * Return: pointer to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int count_s1 = 0, count_s2 = 0;
	char *p = NULL;

	for (i = 0; s1[i]; i++)
		count_s1++;

	if (s2 == NULL)
		count_s2 = 0;
	else
		for (i = 0; s2[i]; i++)
			count_s2++;

	(n <= count_s2) ? 0 : (n = count_s2);

	p = malloc(sizeof(char) * (count_s2 + n + 1));

	if (p == NULL)
		exit(3);

	for (i = 0; s1[i]; i++)
		p[i] = s1[i];

	if (n > 0)
		for (j = 0; j < n; j++)
			p[i++] = s2[j];

	p[i] = '\0';
	return (p);
}
