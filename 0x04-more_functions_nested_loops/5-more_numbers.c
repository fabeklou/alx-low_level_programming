#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	char i, j, k;
	int wit;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0', k = '0', wit = 0; j <= '9';)
		{
			_putchar(j);

			if (j == '9')
			{
				j = '1';
				wit = 1;
				continue;
			}

			if (wit == 1)
			{
				_putchar(k++);

				if (k == '5')
				{
					break;
				}
			}
			else
			{
				j++;
			}
		}

		_putchar('\n');
	}
}
