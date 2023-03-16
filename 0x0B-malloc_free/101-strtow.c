#include <stdlib.h>

/**
 * _word_count - counts the number of words
 * in the given string
 *
 * @str: the string whose words are to be counted
 *
 * Return: the number of words
 */
int _word_count(char *str)
{
	int i, w_count = 0;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] != ' ') && ((i == 0) || (str[i - 1] == ' ')))
		{
			w_count++;
			for (; str[i + 1] == ' '; i++)
				;
		}
	}

	return (w_count);
}

/**
 * _char_by_word - counts the number of character
 * for each words
 *
 * @str: the string to b
 * @words_len: pointer to an array of inetger
 *
 * Return: nothing
 */
void _char_by_word(char *str, int *words_len)
{
	int i, c_count = 0, index = 0;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] != ' ') && ((i == 0) || (str[i - 1] == ' ')))
		{
			for (; str[i] && (str[i] != ' '); i++)
				c_count++;
			words_len[index++] = c_count;
			c_count = 0;
		}
	}
}

/**
 * _allocate_space - allocates the right space in memory
 * for the new array of words
 *
 * @w_count: number of words
 * @words_len: array of the words length
 *
 * Return: pointer to the allocated memory space
 */
char **_allocate_space(int w_count, int *words_len)
{
	int i;
	char **str_split = (char **)calloc(w_count + 1, sizeof(char *));

	for (i = 0; i < w_count; i++)
	{
		str_split[i] = (char *)calloc(words_len[i] + 1, sizeof(char));
	}

	return (str_split);
}

/**
 * strtow - splits string into words
 *
 * @str: pointer to the string to split
 *
 * Return: a pointer to an array of strings or NULL
 */
char **strtow(char *str)
{
	int i, x = 0, y = 0;
	int w_count;
	int *words_len = NULL;
	char **str_split = NULL;

	w_count = _word_count(str);

	if (str == NULL || w_count == 0)
		return (NULL);

	words_len = (int *)calloc(w_count, sizeof(int));
	_char_by_word(str, words_len);

	str_split = _allocate_space(w_count, words_len);

	for (i = 0; str[i]; i++)
	{
		if ((str[i] != ' ') && ((i == 0) || (str[i - 1] == ' ')))
		{
			for (; str[i] && (str[i] != ' '); i++)
				str_split[x][y++] = str[i];
			str_split[x][y] = '\0';
			y = 0;
			x++;
		}
	}
	str_split[x] = NULL;
	free(words_len);

	return (str_split);
}
