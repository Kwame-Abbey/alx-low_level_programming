#include "dog.h"
#include <stdio.h>

/**
 * free_dog - frees dog
 * @d: Pointer variable
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
