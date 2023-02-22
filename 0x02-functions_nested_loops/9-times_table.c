#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, res;

	void table(int n)
	{
		for (i = 0; i <= 9; i++)
		{
			res = i * n;

			if (res <= 9)
			{
				_putchar('0' + res);
			{
			else
			{
				_putchar('0' + res / 10);
				_putchar('0' + res % 10);
			}
			if (i < 9)
			{
				_putchar(',');

				if (res > 9)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}

	for (i = 0; i <= 9; i++)
	{
		table(i);
	}
}
