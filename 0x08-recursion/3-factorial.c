#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: the number whose factorial must be found
 *
 * Return: (-1) if n is negative, (0) if n is equal to 0
 * and (n!) if n is equal or greater than 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
