#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: size of the array
 * @size: amount of bytes for each element of the array
 *
 * Return: a pointer to the allocated memory space
 * or  NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void **p = NULL;

	if (nmemb == 0  || size == 0)
		return (NULL);

	p = malloc(nmemb);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		p[i] = malloc(size);

		if (p[i] == NULL)
		{
			for (; i > 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);
}
