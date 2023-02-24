#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	if (a > b)
	{
		if (a > c)
			return (a);
		else
			return (b);
	}
	else if (b > a)
	{
		if (b > c)
			return (b);
		else
			return (c);
	}
	else if (c > a)
	{
		if (c > b)
			return (c);
		else
			return (b);
	}
}
