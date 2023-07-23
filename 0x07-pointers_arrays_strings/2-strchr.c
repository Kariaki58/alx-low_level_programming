#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: return pointer to the first character in the string
 */
char *_strchr(char *s, char c)
{
	if (*s == c)
		return (s);
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
