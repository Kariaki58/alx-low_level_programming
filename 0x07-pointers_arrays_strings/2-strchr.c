#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	/*
	int find_status = 0;
	char newchr[100];
	*/
	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
