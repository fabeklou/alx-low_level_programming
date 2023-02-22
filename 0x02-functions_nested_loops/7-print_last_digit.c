#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: The number to be used
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int temp;

	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		temp = n * (-1);
		return (temp % 10);
	}
	else
	{
		return (n % 10);
	}
}
