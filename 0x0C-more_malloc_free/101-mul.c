#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: multiplies two positive numbers
 * and prints the result
 *
 * @argc: number of command line arguments
 * @argv: array of arguments
 *
 * Return: nothing
 */
int main(int argc, char **argv)
{
	int i, j;
	unsigned long int result;

	if (argc != 3)
	{
		puts("Error");
		exit(98);
	}

	for (i = 1; i < 3; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if ((argv[i][j] < 48) || (argv[i][j] > 57))
			{
				puts("Error");
				exit(98);
			}
		}
	}
	result = (atoi(argv[1])) * (atoi(argv[2]));
	printf("%ld\n", result);
	return (0);
}
