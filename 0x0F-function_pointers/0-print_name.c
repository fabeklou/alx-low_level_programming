#include <stdio.h>

/**
 * print_name - prints a name
 *
 * @name: name of the person
 * @f: callback function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
