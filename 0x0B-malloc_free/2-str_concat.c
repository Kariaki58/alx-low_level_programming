#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - the string concatination
 * @s1: first string entry
 * @s2: second string entry
 * Return: concate s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char* new_string;
	int size = strlen(s1) + strlen(s2);

	if (s1 == NULL || s2 == NULL)
	{
		return "";
	}
	new_string = malloc(size + 2);
	if (new_string == NULL)
	{
		return NULL;
	}
	strcat(new_string, s1);
	strcat(new_string, s2);
	return new_string;
}
