#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a dog
 * @d: dog to be init
 * @name: its name
 * @age: its age
 * @owner: its owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
