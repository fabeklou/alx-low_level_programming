#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/**
	 * @i: loop control variable
	 * @acc: hold the sum the two previous numbers
	 * @next: hold the next number to be add
	 * @temp: temporary variable, will help to share values
	 */
	int  i; 
	long unsigned int acc, next, temp;

	for (i = 1, acc = 1, next = 0, temp = 0; i <= 50; i++)
	{
		temp = next;
		next = acc;
		acc += temp;

		printf("%ld", acc);

		if (i != 50)
			printf(", ");
	}

	return (0);
}
