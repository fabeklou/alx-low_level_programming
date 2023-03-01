#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: pointer to an array of integers
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	n--;

	for (i = 0; n / 2 > i; i++)
	{
		temp = a[n - i];
		a[n - i] = a[i];
		a[i] = temp;
	}
}
