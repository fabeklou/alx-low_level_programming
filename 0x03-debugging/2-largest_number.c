#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: the largest number
 */
int largest_number(int a, int b, int c)
{
	/*
	 * @inter: intermediate variable
	 * (will hold the provisional largest integer)
	 */
	int inter, largest;

	inter = (a > b) ? a : b;
	largest = (inter > c) ? inter : c;

	return (largest);
}
