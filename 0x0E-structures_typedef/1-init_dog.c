#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: pointer to the variable to be initialized
 * @name: the dog's name of type pointer to character
 * @age: the dog's age of type float
 * @owner: the dog's owner of type pointer to character
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
