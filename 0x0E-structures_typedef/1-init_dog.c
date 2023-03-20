#include <stdio.h>
#include "dog.h"

/**
 * init_dog - void function
 * @d: memory of the structure
 * @name: input char 1
 * @age: floating point number
 * @owner: char input 2
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
