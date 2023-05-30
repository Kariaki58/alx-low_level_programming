#include <stdio.h>
#include "main.h"

/**
 * _strlen - write strlen function
 * @s: input string s
 * Return: return length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
