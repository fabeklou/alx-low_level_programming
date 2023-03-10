#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 * @i: The number to be computed
 *
 * Return: the absolute value of an integer
 */
int _abs(int i)
{
	if (i == 0 || i > 0)
		return (i);
	else
		return (i * (-1));
}
