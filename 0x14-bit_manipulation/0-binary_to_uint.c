#include "main.h"

/**
 * _str_len - returns the len of a given string
 *
 * @bin: pointer to the string to be measured
 * @num: number of characters in the string
 *
 * Return: the len of a given string
 */
unsigned int _str_len(const char *bin, unsigned int num)
{
	if (!(*bin))
		return (num);

	return (_str_len(++bin, ++num));
}

/**
 * _int_pow - returns the result of raising (base), to the power
 * of (power)
 *
 * @base: the base value
 * @power: the power value
 *
 * Return: the result of @base (2) to the power of @power
 */
unsigned int _int_pow(unsigned int base, unsigned int power)
{
	unsigned int i, result = 1;

	if (power == 0)
		return (1);

	for (i = 0; i < power; i++)
		result *= base;

	return (result);
}

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 *
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int char_count = 0, converted = 0;

	if (!b)
		return (0);

	char_count = _str_len(b, char_count);

	for (; char_count > 0; b++, char_count--)
	{
		if (*b == 48)
			continue;
		else if (*b == 49)
			converted += _int_pow(2, char_count - 1);
		else
			return (0);
	}
	return (converted);
}
