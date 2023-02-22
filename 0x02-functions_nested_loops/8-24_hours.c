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
				_putchar(i);
			}
			else
			{
				_putchar(i);
			}

			if (j <=9)
			{
				_putchar('0');
				_putchar(j);
			}
			else
			{
				_putchar(i);
			}
		}
		_putchar('\n');
	}
}
