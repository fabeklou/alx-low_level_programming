#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - pointer to function that fills memory with a constant byte
 *
 * @s: the memory address to be filled
 * @b: the value to fill the memory address with
 * @n: the number of bytes
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
