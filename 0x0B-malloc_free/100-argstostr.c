#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 *
 * @ac: number of arguments
 * @av: arguments vector
 *
 * Return: a pointer to an array of character
 */
char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int i, j, k = 0, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			k++;
	k = ac + k + 1;

	str = (char *)malloc(sizeof(char) * k);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[l++] = av[i][j];
		}
		str[l++] = '\n';
	}
	str[l] = '\0';

	return (str);
}
