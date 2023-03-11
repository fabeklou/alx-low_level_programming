#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description - prints the result of the multiplication,
 * followed by a new line
 *
 * @argc: argument count (number of command-line arguments)
 * @argv: array of pointers to strings
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(*(argv + 1)) * atoi(*(argv + 2)));
	}
	else
	{
		puts("Error");
		return (1);
	}
	return (0);
}
