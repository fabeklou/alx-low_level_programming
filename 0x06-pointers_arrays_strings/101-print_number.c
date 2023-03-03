#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: the integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int n_copy = n;

	if (n < 0)
	{
		_putchar('-');
		n_copy = n * (-1);
	}
	else
	{
		n_copy = n;
	}

	if (n_copy > 9)
	{
		print_number((n_copy / 10));
	}
	_putchar(n_copy % 10 + '0');
}
