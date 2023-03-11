#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description - prints the minimum number of coins to make
 * change for an amount of money
 *
 * @argc: argument count (number of command-line arguments)
 * @argv: array of pointers to strings
 *
 * Return: 0 (for success) 1 (for failure)
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0, i = 0;
	int values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	cents = atoi(*(argv + 1));

	if (cents < 0)
	{
		puts("0");
		return (0);
	}

	while (i < 5)
	{
		if ((cents - values[i]) >= 0)
		{
			coins++;
			cents -= values[i];
		}
		else
		{
			i++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
