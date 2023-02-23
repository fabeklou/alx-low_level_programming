#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: size of the triangle to be printed
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = size; i >= 1; i--)
	{
		for (j = i - 1; j >= 1; j--)
		{
			_putchar(' ');
		}

		for (k = size - (i - 1); k >= 1; k--)
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
