#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - prints the number of arguments passed
 * followed by a new line
 *
 * @argc: argument count (number of command-line arguments)
 * @argv: array of pointers to strings
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
