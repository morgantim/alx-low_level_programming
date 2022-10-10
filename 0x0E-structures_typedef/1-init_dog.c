#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - this funcion initialize a variable
 * @d: type struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * dog - struct name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
