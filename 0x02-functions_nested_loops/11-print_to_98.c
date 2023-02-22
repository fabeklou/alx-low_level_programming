#include "main.h"

/**
 * print_to_98 - prints all natural numbers from 'n' to 98
 *
 * @n: starting point of the counter
 *
 * Return: A series of number from 'n' to 98
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n > 9)
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
		}
		else if (n < (-9))
		{
			_puchar('-');
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));

		else
		{
			_putchar('0' + n);
		}

		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
}
