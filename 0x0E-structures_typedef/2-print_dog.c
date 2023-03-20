#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: input dog
 */

void print_dog(struct dog *d)
{
	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);
	printf("Age: ");
	if (d->age == NULL)
		printf("(nil)\n");
	else
		printf("%f\n", d->age);
	printf("Owner: ");
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}