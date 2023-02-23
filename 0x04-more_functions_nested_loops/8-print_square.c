#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 *
 * @size: size of the square to be printed
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
