#include "main.h"

/**
 * _palindrome_checker - verify if the given number is the same
 * whether read forwards or backwards
 *
 * @s: the string to be checked
 * @n: the length of the given string
 *
 * Return: (1) if @s is a palindrome, (0) otherwise
 */
int _palindrome_checker(char *s, int n)
{
	int i;

	for (i  = 0; s[i] && s[n]; i++, n--)
	{
		if (s[i] != s[n])
			return (0);
	}
	return (1);
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
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (_palindrome_checker(s, i - 1));
}
