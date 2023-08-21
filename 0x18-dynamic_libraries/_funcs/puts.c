#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 *
 * @s: pointer to the string to be printed
 *
 * Return: void
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}

	putchar('\n');
}
