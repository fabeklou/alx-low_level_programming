#include "main.h"

/**
 * infinite_add - adds two numbers
 *
 * @n1: a pointer to the first number
 * @n2: a pointer to the second number
 * @n: a pointer to the result
 * @size_r: the buffer size
 *
 * Return: a pointer to the result (n) or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;

	for (i = 0; n1[i]; i++)
		;

	for (j = 0; n2[j]; j++)
		;

	if (i >= size_r || j >= size_r)
		return (0);



	return (r);
}
