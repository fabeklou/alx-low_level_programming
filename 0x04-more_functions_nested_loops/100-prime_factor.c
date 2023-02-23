#include <stdio.h>

#define NUM 612852475143

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, max;
	float res;

	i = 2;

	while (i <= 200)
	{
		res = (float)NUM / i;

		if ((int)res == res)
		{
			max = res;
			continue;
		}
		i++;
	}

	printf("%d\n", max);

	return (0);
}
