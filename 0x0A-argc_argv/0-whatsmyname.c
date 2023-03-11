#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - prints the name of the executable
 * followed by a new line
 *
 * @argc: argument count (number of command-line arguments)
 * @argv: array of pointers to strings
 *
 * Return: always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
