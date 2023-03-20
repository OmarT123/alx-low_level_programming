#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: its name
 * @age: its age
 * @owner: its owner
 * Return: pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (0);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
