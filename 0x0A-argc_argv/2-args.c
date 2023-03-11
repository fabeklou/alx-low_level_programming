#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - prints all arguments it receives
 * followed by a new line
 *
 * @argc: argument count (number of command-line arguments)
 * @argv: array of pointers to strings
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	while (argc-- > 0)
		printf("%s\n", *argv++);
	return (0);
}
