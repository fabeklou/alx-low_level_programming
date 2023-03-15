#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description - adds multiple positive numbers and print the result,
 * followed by a new line
 *
 * @argc: argument count (number of command-line arguments)
 * @argv: array of pointers to strings
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		puts("0");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!(argv[i][j] >= 48 && argv[i][j] <= 57))
			{
				puts("Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
