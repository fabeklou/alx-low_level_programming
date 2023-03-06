#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: the square matrix
 * @size: number of integers inside the second subscript
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum_l = 0, sum_r = 0;
	
	for (i = 0, j = 0; j < size ; i += (size + 1), j++)
	{
		sum_l += *(a + i);
	}

	for (i = size - 1, j = 0; j < size; i += (size - 1), j++)
	{
		sum_r += *(a + i);
	}

	printf("%d, %d\n", sum_l, sum_r);
}
