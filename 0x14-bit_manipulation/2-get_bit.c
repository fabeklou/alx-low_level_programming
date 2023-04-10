#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index using recursion
 *
 * @n: the number to be used
 * @index: the index, starting from 0
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0 && index > 0)
		return (-1);

	if (index == 0)
	{
		if (n & 1)
			return (1);
		else
			return (0);
	}

	return (get_bit(n >> 1, index - 1));
}
