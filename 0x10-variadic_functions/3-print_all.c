#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
  * print_char - prints a character
  *
  * @args: list of variadic arguments
  *
  * Return: nothing
  */
void print_char(va_list args)
{
	printf("%c", (char)va_arg(args, int));
}


/**
  * print_int - prints an integer
  *
  * @args: list of variadic arguments
  *
  * Return: nothing
  */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}


/**
  * print_float - prints a float
  *
  * @args: A list of variadic arguments
  *
  * Return: nothing
  */
void print_float(va_list args)
{
	printf("%f", (float)va_arg(args, double));
}


/**
  * print_string - prints a string
  *
  * @args: A list of variadic arguments
  *
  * Return: nothing
  */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}


/**
 * print_all - prints anything (char, integer, float, char *)
 *
 * @format: a string representing the list of types of arguments
 * passed to the function
 * @...: variadic arguments
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list args;
	char *separator = "";
	ft_dt valid_id[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;

		while (j < 4 && format[i] != *valid_id[j].id)
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			valid_id[j].f(args);
			separator = ", ";
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
