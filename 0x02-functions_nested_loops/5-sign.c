#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: The number to be checked
 *
 * Return: '1', '0' or '-1' depending to the sign of the given number
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
