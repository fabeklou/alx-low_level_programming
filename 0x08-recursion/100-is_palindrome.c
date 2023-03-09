#include "main.h"

/**
 * _str_len - return the length of the given string
 *
 * @s: the string
 * @len: the len of the given string
 *
 * Return: the length of the given string
 */
int _str_len(char *s, int len)
{
	if (s[0])
		len++;
	if (!(s[0]))
		return (len);

	return (_str_len(s + 1, len));
}

/**
 * _palindrome_checker - verify if the given string is the same
 * whether read forwards or backwards
 *
 * @s_f: the string that will be read forwards
 * @s_b: the string that will be read backwards
 *
 * Return: (1) if the given string is a palindrome (0) otherwise
 */
int _palindrome_checker(char *s_f, char *s_b, int len)
{
	if (s_f[0] != s_b[len])
		return (0);
	if (len == 0)
		return (1);

	return (_palindrome_checker(s_f + 1, s_b, len - 1));
}


/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *
 * @s: the string to be checked
 *
 * Return: (1) if the given string is a palindome, (0) otherwise
 */
int is_palindrome(char *s)
{
	int len;

	if (!(s[0]))
		return (0);

	len = _str_len(s, 0);

	return (_palindrome_checker(s, s, len - 1));
}
