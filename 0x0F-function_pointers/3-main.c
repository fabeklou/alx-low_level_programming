#include "3-calc.h"

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: array of command-line arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num_1 = atoi(argv[1]), num_2 = atoi(argv[3]);
	int (*ptr_opf)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	if (((argv[2][0] == '%') || (argv[2][0] == '/')) && num_2 == 0)
	{
		puts("Error");
		exit(100);
	}

	ptr_opf = get_op_func(argv[2]);

	if (ptr_opf == NULL)
	{
		puts("Error");
		exit(99);
	}

	printf("%d\n", ptr_opf(num_1, num_2));

	return (0);
}
