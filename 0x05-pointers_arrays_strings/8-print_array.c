#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @n: number of elements of the array to be printed
 * @a: pointer to the array of numbers
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (n-- > 0)
	{
		printf("%d", a[i++]);
		if (n != 0)
			printf(", ");
	}
	printf("\n");
}
