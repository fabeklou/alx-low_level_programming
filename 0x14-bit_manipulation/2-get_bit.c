#include "main.h"

/**
 *
 *
 *
 *
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index == 0)
	{
		if (n & 1)
			return (1);
		else
			return (0);
	}

	return (get_bit(n >> 1, index - 1));
}
