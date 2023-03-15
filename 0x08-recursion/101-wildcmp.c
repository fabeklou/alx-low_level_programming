#include "main.h"

/**
 * _string_len - determine and return the len of the given string
 *
 * @str: the given string
 *
 * Return: the length of @str
 */
int _string_len(char *str)
{
	if (!(str[0]))
		return (0);

	return (1 + _string_len(str + 1));
}

/**
 * wildcmp - compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0
 *
 * @s1: the first string (the simple one)
 * @s2: the second string (can contain the special character *)
 *
 * Return: (1) if the two strings can be considered identical
 * (0) otherwise
 */
int wildcmp(char *s1, char *s2)
{
	int s1_len, s2_len;

	s1_len = _string_len(s1);
	s2_len = _string_len(s2);


}
