#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - the function
 * @str: str input
 * Return: return s on success
 */
char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
		return (NULL);

	s = malloc(strlen(str));
	if (s == NULL)
		return (NULL);
	memcpy(s, str, strlen(str));
	return (s);
}
