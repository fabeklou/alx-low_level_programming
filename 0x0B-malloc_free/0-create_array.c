#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of the array to create
 * @c: the character to fill the array with
 *
 * Return: a ponter to character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc((sizeof(char) * size) + 1);

	if (arr == NULL)
		return (NULL);

	while (i < size)
		*(arr + i++) = c;

	*(arr + i) = '\0';
	return (arr);
}
