#include "main.h"

/**
 * _sqrt_verify - verify en return the value of the square root
 * if exist or (-1) otherwise
 *
 * @i: the smallest possible value of the square root
 * @n: the the number wghose natural squaare root must be found
 *
 * Return: (-1) if the natural square root of the given number does not exist
 * the square root otherwise
 */
int _sqrt_verify(int i, int n)
{
	if (n == (i * i))
		return (i);
	if (n < (i * i))
		return (-1);

	return (_sqrt_verify(i + 1, n));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number whose natural root must be found
 *
 * Return: (-1) if the n does not have natural square root
 * (the natural square root) otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);

	return (_sqrt_verify(1, n));
}
