#include "main.h"
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
	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (0);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
}
