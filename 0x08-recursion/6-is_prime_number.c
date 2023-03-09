#include "main.h"

/**
 * _prime_num_ckecker - verify if the given number has more than two
 * 2 divisor
 *
 * @n: the value to be checked
 * @min: the smallest divisor of n (1)
 * @c: divider counter
 *
 * Return: (0) if @n has exactly two divisors, (1) otherwise
 */
int _prime_num_checker(int n, int min, int c)
{
	if (n % min == 0)
		c++;

	if (c > 2)
		return (0);
	if (min > n)
		return (1);

	return (_prime_num_checker(n, min + 1, c));
}


/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 *
 * @n: the number to be checked
 *
 * Return: (1) if the given value is a prime number, (0) otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_prime_num_checker(n, 1, 0));
}
