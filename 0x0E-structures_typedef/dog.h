#ifndef _DOG_
#define _DOG_

/**
 * struct dog - defines a new type <struct dog> with
 * the following elements:
 *
 * @name: dog's member of type pointer to character
 * @age: dog's member of type float
 * @owner: dog's member of type pointer to character
 *
 * Description: defines a new type <struct dog> with
 * @name @age and @owner
 */
struct dog
{
		char *name;
		float age;
		char *owner;
};


/* Function Prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


/* End of _DOG_ */
#endif
