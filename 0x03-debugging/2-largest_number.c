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
	int inter = 0;
	int largest = 0;

	if (a > b)
	{
		inter = a;
	}
	else
	{
		inter = b;
	}

	if (inter > c)
	{
		largest = inter;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
