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

/**
 * dog_t - new name for the type 'struct dog', defined with typedef
 */
typedef struct dog dog_t;

/* Function Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


/* End of _DOG_ */
#endif
