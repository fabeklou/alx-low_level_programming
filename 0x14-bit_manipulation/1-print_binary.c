#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the decimal number
 *
 * Return : nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int lar_bit_w = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}

	while (lar_bit_w * 2 <= n)
		lar_bit_w *= 2;

	while (lar_bit_w > 0)
	{
		if (n == lar_bit_w ||  n > lar_bit_w)
			n = (_putchar('1'), n - lar_bit_w);
		else
			_putchar('0');

		lar_bit_w *= 0.5;
	}
}
