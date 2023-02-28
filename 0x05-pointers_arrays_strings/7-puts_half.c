#include "main.h"

/**
 * puts_half - prints half of a string,
 *
 * @str: pointer to the variable of type char
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, length = 0;

	while (str[length])
	{
		length++;
	}


	if (length % 2 == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length + 1) / 2;
	}

	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
