#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function
 * @name: input string1
 * @age: input float
 * @owner: input char1
 * Return: return mydog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	if (name != NULL && owner != NULL)
	{
		mydog = malloc(sizeof(dog_t));

		if (mydog == NULL)
		{
			free(mydog);
			return (NULL);
		}
		mydog->name = malloc(sizeof(char) * (strlen(name) + 1));
		if (mydog->name == NULL)
		{
			free(mydog->name);
			return (NULL);
		}
		mydog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
		if (mydog->owner == NULL)
		{
			free(mydog->name);
			free(mydog->owner);
			free(mydog);
			return (NULL);
		}
		strcpy(mydog->name, name);
		strcpy(mydog->owner, owner);
		mydog->age = age;
	}
	return (mydog);
}
