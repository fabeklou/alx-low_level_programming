#include <stdio.h>

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
	unsigned long long int acc, next, temp;

	for (i = 1, acc = 1, next = 0, temp = 0; i <= 98; i++)
	{
		temp = next;
		next = acc;
		acc += temp;

		printf("%ld", acc);

		if (i != 98)
			printf(", ");
	}
	puts("");

	return (0);
}
