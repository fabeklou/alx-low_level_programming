#include "main.h"

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
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}
