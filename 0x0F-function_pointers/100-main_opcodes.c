#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: prints the opcodes of itself
 *
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	int (*main_addr)(int, char **);
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_addr = main;

	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)main_addr;
		printf("%.2x", opcode);
		if (i < bytes - 1)
			printf(" ");
		main_addr++;
	}
}
