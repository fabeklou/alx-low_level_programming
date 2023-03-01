#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: 0 if equal, signed difference between both otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, s1_value = 0, s2_value = 0;

	for (i = 0; s1[i]; i++)
		s1_value += (int)(s1[i]);

	for (j = 0; s2[j]; j++)
		s2_value += (int)(s2[j]);

	return (s1_value - s2_value);
}
