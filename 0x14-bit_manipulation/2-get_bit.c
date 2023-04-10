#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: the number to be used
 * @index: the index, starting from 0
 *
 * Return: the value of the bit at index or -1 if 
 * an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);

	if (n >> index & 1)
		return (1);
	else
		return (0);
}
