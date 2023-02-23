#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: the number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int i;

	if (n < -9)
	{
		i = -n;
		_putchar('-');
		_putchar('0' + (i / 10));
		_putchar('0' + (i % 10));
	}
	else if (n >= 0 && n <= 9)
	{
		_putchar('0' + n);
	}
	else if (n > 999)
	{
		_putchar('0' + (n / 1000));
		_putchar('0' + ((n / 100) % 10));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
	else if (n > 99)
	{
		_putchar('0' + (n / 100));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
	else if (n > 9)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
}
