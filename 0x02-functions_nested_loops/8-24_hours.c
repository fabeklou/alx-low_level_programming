#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			if (i <= 9)
			{
				_putchar('0');
				_putchar('0' + i);
			}
			else
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}

			_putchar(':');

			if (j <= 9)
			{
				_putchar('0');
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + j / 10);
				_putchar('0' + j % 10);
			}

			_putchar('\n');
		}
	}
}
