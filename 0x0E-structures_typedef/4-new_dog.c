#include <stdlib.h>
#include "dog.h"


/**
 * _str_len - counts the number of characters in a string
 *
 * @str: the string to count
 *
 * Return: the number of characters
 */
int _str_count(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * _str_cpy - copies a string into another one
 *
 * @str_dest: the string to be replaced
 * @str_src: the string to copy
 *
 * Return: pointer to the @str_dest
 */
char *_str_cpy(char *str_dest, char *str_src)
{
	int i;

	for  (i = 0; str_src[i]; i++)
		str_dest[i] = str_src[i];

	str_dest[i] = '\0';

	return (str_dest);
}


/**
 * new_dog - creates a new dog
 *
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: pointer to struct of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len;
	dog_t *puppy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	puppy = malloc(sizeof(dog_t));

	if (puppy == NULL)
		return (NULL);

	name_len = _str_count(name);
	owner_len = _str_count(owner);

	puppy->name = malloc(sizeof(char) * (name_len + 1));
	if (puppy->name == NULL)
	{
		free(puppy);
		return (NULL);
	}

	puppy->owner = malloc(sizeof(char) * (owner_len + 1));
	if (puppy->owner == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}

	puppy->name = _str_cpy(puppy->name, name);
	puppy->owner = _str_cpy(puppy->owner, owner);
	puppy->age = age;

	return (puppy);
}
