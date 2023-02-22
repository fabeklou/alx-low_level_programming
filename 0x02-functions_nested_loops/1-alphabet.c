#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 *
 * Return: void (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	putchar('\n');

	return;
}
