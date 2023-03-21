#include <stdlib.h>
#include "dog.h"

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
	dog_t *puppy;

	puppy = malloc(sizeof(dog_t));

	if (puppy == NULL)
		return (NULL);

	puppy->name = name;
	puppy->age = age;
	puppy->owner = owner;

	return (puppy);
}
