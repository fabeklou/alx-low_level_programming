#include "main.h"

/**
 * _shift_print_back - shifts and prints a binary number
 * backword using recursion
 *
 * @num: the decimal number >= 2
 *
 * Rteurn: nothing
 */
void _shift_print_back(unsigned long int num)
{
	if (num == 0)
		return;

	_shift_print_back(num >> 1);

	if (num & 1)
		_putchar(49);
	else
		_putchar(48);
}

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the decimal number
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar(48);
		return;
	}

	if (n == 1)
	{
		_putchar(49);
		return;
	}
	 _shift_print_back(n);
}
