#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function void
 * @d: memeory input
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
