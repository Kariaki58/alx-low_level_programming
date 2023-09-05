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
		free(dog);
		return (NULL);
	}
	mydog->owner = malloc(sizeof(char) * (len2 + 1));
	if (!mydog->owner)
	{
		free(dog);
		return (NULL);
	}
	dog->name = strdup(name);
	dog->owner = strdup(owner);
	dog->age = age;
	return (mydog);
}
