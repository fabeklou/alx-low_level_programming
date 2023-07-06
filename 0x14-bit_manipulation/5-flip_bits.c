#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: starting number
 * @m: target number
 *
 * Return: the number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_changed, bit_count = 0;

	if (n == m)
		return (0);

	bit_changed = n ^ m;

	while (bit_changed)
	{
		if (bit_changed & 1)
			bit_count++;

		bit_changed = bit_changed >> 1;
	}
	return (bit_count);
}
