#include <stdlib.h>


/**
 * fill_str_split - fills the matrix with the words
 * cut from the target string
 *
 * @str_split: pointer to the array of strings (words)
 * @words_size: pointer to an array that contains the number of
 * words and their length
 * @str: pointer to the given string
 *
 * Return: a pointer to the array of string
 */
char **fill_str_split(char **str_split, int *words_size, char *str)
{
	int i, j = 0, k;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 33 && str[i] <= 126) && ((str[i - 1] == ' ') || i == 0))
		{
			for (k = 0; k < words_size[j] - 1; k++)
			{
				str_split[j][k] = str[i];
				i++;
			}
			str_split[j][k] = '\0';
			j++;
		}
	}

	return (str_split);
}



/**
 * strtow - splits a string into words
 *
 * @str: pointer to the string to split
 *
 * Return: a pointer to an array of strings or NULL
 */
char **strtow(char *str)
{
	int i, k = 0, l = 0, len = 0;
	char **str_split = NULL;
	int *words_size = NULL;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		if ((str[i] >= 33 && str[i] <= 126) && ((str[i - 1] == ' ') || i == 0))
			k++;

	str_split = (char **)malloc((sizeof(char *) * k) + 1);
	if (str_split == NULL)
		free(str_split);
	words_size = (int *)calloc(k, sizeof(int));
	if (words_size == NULL)
		free(words_size);

	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 33 && str[i] <= 126) && ((str[i - 1] == ' ') || i == 0))
		{
			for (len = 0; str[i] != ' '; i++)
				len++;
			words_size[l] = len + 1;
			l++;
		}
	}

	for (i = 0; i < k; i++)
	{
		str_split[i] = (char *)malloc((sizeof(char)) * words_size[0]);
		if (str_split[i] == NULL)
		{
			for (; i >= 0; i--)
				free(str_split[i]);
			free(str_split);
		}
	}
	return (fill_str_split(str_split, words_size, str));
}
