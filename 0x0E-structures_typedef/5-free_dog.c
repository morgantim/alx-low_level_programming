#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - this funcion frees dogs
 * @d: dog name
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
