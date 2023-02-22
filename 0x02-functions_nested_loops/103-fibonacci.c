#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/**
	 * @acc: hold the sum the two previous numbers and control the loop
	 * @next: hold the next number to be add
	 * @temp: temporary variable, will help to switch values
	 * @sum: sum of the even-valued terms
	 */
	unsigned long int acc, next, temp, sum;

	acc = 1, next = 0, temp = 0, sum = 0;

	while (acc < 4000000)
	{
		temp = next;
		next = acc;
		acc += temp;

		if ((acc % 2) == 0)
			sum += acc;
	}
	printf("%ld\n", sum);

	return (0);
}
