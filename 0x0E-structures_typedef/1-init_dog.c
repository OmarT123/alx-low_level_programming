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
	if (dog == NULL)
		dog = malloc(sizeof(struct dog));
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
}
