#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first character
 *
 * @str: a pointer to the string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int length = 0;

	while (str[length])
	{
		if (((int)(str[length]) % 2) == 0)
			_putchar(str[length]);

		length++;
	}
	_putchar('\n');
}
