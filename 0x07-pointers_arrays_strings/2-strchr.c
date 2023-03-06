#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to teh string
 * @c: pointer to the character
 *
 * Return: a pointer to the first occurence of @c in @s or NULL
 */
char *_strchr(char *s, char c)
{
	int i, j;

	for (j = 0; s[j]; j++)
		;

	for (i = 0; i < j; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
