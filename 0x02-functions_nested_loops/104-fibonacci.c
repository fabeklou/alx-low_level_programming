#include <stdio.h>

#define MAX_VAL 12200160415121876738

/**
 * main - entry point (prints the first 98 Fibonacci numbers)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/**
	 * @i: loop control variable
	 * @acc: hold the sum of the two previous numbers
	 * @next: hold the next number to be add
	 * @temp: temporary variable, will help to switch values
	 */
	int  i;
	unsigned long int acc, next, temp;

	/**
	 * @part_1: hold the first half of a long long number
	 * @part_2: hold the second half of a long long number
	 */
	unsigned long int part_1, part_2;

	for (i = 1, acc = 1, next = 0, temp = 0; i <= 98; i++)
	{
		temp = next;
		next = acc;
		acc += temp;

		if (acc <= MAX_VAL)
		{
			printf("%lu", acc);
		}
		else
		{
			part_1 = (unsigned long int)(acc / 1000000000);
			part_2 = (unsigned long int)(((acc / 1000000000) % 1) * 1000000000);
			printf("%lu%lu", part_1, part_2);
		}


		if (i != 98)
			printf(", ");
	}
	puts("");

	return (0);
}
