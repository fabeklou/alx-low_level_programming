#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print the alphabet in lowercase except <q> & <e>'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);

	putchar('\n');

	return (0);
}
