#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of dog
 * @age: Age of Dog
 * @owner: Owner of Dog
 * Return: Pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name, *new_owner;
	int len_name, len_owner;
	dog_t *abbey;

	abbey = malloc(sizeof(dog_t));

	if (abbey == NULL)
		return (NULL);
	len_name = strlen(name);
	new_name = malloc((len_name + 1) * sizeof(char));

	if (new_name == NULL)
	{
		free(abbey);
		return (NULL);
	}

	strcpy(new_name, name);
	len_owner = strlen(owner);
	new_owner = malloc((len_owner + 1) * sizeof(char));

	if (new_owner == NULL)
	{
		free(new_name);
		free(abbey);
		return (NULL);
	}

	strcpy(new_owner, owner);

	abbey->name = new_name;
	abbey->age = age;
	abbey->owner = new_owner;

	return (abbey);
}
