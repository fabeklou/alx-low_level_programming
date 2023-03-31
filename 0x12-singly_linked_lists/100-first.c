#include <stdio.h>

/**
 * before_main - execute a few lines of code before the main function
 *
 * Return: nothing
 */
void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
