#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 * @n: The number to be computed
 *
 * Return: the absolute value of an integer
 */
int _abs(int n)
{
	if (n == 0 || n > 0)
		return (n);
	else
		return (n * (-1));
}
