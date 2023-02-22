#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: number of table to print
 *
 * Return: Void
 */
void print_times_table(int n)
{
	if (!(n > 15 || n < 0))
	{
		int i, j, result;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				_putchar(' ');
				if (result > 99)
				{
					_putchar('0' + ((result / 100) % 10));
					_putchar('0' + ((result / 10) % 10));
					_putchar('0' + ((result % 10)));
				}
				else if (result > 9)
				{
					_putchar(' ');
					_putchar('0' + ((result / 10) % 10));
					_putchar('0' + ((result % 10)));
				}
				else
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + ((result % 10)));
				}

				if (result != (n * n))
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
