#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 and Fizz, Buzz or FizzBuzz otherwise
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		putchar(' ');
	}
	puts("");
	return (0);
}
