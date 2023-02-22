#include "main.h"

/**
 * print_to_98 - prints all natural numbers from 'n' to 98
 *
 * @n: starting point of the counter
 *
 * Return: Void
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (; n > 98; n--)
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));

			_putchar(',');
			_putchar(' ');
		}
		_putchar('0' + n);
		_putchar('\n');
	}

	else
	{
		for (; n < 98; n++)
		{
			if (n < -9)
			{
				_putchar('-');
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
			else if (n > 9)
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
			else
			{
				_putchar('0' + n);
			}

			_putchar(',');
			_putchar(' ');
		}
		_putchar('0' + n);
		_putchar('\n');
	}
}
