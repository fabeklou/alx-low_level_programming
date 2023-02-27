#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - update the value of a varible via a pointer
 *
 * @n: the pointer to a avriable of type int
 *
 * Return: Always 0 (Success)
 */
void reset_to_98(int *n)
{
	*n = 98;
}
