#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - Dog with following element
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Description: This struct holds several elements of a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
