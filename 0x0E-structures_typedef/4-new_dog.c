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
	int len, len2;

	len = strlen(name);
	len2 = strlen(owner);
	mydog = malloc(sizeof(dog_t));
	if (!mydog)
		return (NULL);
	mydog->name = malloc(sizeof(char) * (len + 1));
	if (!mydog->name)
	{
		free(mydog);
		return (NULL);
	}
	mydog->owner = malloc(sizeof(char) * (len2 + 1));
	if (!mydog->owner)
	{
		free(mydog);
		return (NULL);
	}
	mydog->name = strdup(name);
	mydog->owner = strdup(owner);
	mydog->age = age;
	return (mydog);
}
