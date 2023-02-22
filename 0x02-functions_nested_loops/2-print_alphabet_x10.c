#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description:
 * prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: void (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 10; i > 0; i--)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
