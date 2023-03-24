#ifndef _VARIADIC_FUNC_H
#define _VARIADIC_FUNC_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct ft_dt - struct ft_dt
 *
 * @identifier: The conversion specifier
 * @f: The function associated
 */
typedef struct ft_dt
{
	char *id;
	void (*f)(va_list args);
} ft_dt;

void print_all(const char * const format, ...);

/* End of _VARIADIC_FUNC_H */
#endif
