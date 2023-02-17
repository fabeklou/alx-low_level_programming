#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print the alphabet in lowercase and uppercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);

	putchar('\n');

	return (0);
}
