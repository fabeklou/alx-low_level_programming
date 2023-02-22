#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: The number to be used
 *
 * Return: the value of the last digit of a number
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	putchar('0' + last_digit);

	return (last_digit);
}
