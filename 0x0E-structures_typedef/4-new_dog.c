#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of dog
 * @age: Age of Dog
 * @owner: Owner of Dog
 * Return: Pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *abbey;

	abbey = malloc(sizeof(dog_t));
	if (abbey == NULL)
		return (NULL);

	abbey->name = name;
	abbey->age = age;
	abbey->owner = owner;

	return (abbey);
}
