#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of diagonal line to be draw
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar(92);
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
