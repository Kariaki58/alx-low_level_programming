#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	mydog = malloc(sizeof(dog_t));
	if (!mydog)
		return (NULL);
	if (!name || !owner)
	{
		free(mydog);
		return (NULL);
	}
	mydog->name = strdup(name);
	mydog->owner = strdup(owner);
	if (!mydog->name || !mydog->owner)
	{
		free(mydog->name);
		free(mydog->owner);
		free(mydog);
		return (NULL);
	}
	mydog->age = age;
	return (mydog);
}
