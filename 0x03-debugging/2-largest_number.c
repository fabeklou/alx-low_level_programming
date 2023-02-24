#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	/* 
	 * @inter: intermediate variable (will hold the provisional largest integer)
	 * */
	int inter, largest;

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
