#include <stdio.h>
#include "dog.h"
#include <string.h>

/**
 * init_dog - void function
 * @d: memory of the structure
 * @name: input char 1
 * @age: floating point number
 * @owner: char input 2
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(name) + sizeof(age) * strlen(owner));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
