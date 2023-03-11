#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description - adds two positive numbers and print the result,
 * followed by a new line
 *
 * @argc: argument count (number of command-line arguments)
 * @argv: array of pointers to strings
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0, argv_el;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		while (i < argc)
		{
			argv_el = atoi(argv[i]);

			if (argv_el != 0)
			{
				sum += argv_el;
			}
			else if (!(isdigit(argv_el)))
			{
				puts("Error");
				return (1);
			}
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
