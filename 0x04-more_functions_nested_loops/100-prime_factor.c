#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	long max, num;
	double res;

	num = 612852475143;

	i = 2;
	max = num;

	while (i <= 782848)
	{
		res = (double)max / i;

		if (((long)res == res) && (res != 0))
		{
			max = (long)res;
			continue;
		}
		i++;
	}

	printf("%ld\n", max);

	return (0);
}
