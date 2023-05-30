#include "main.h"
#include <stdio.h>

/**
 * _strlen - get length of string s
 * @s: string s
 * Return: return len
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

/**
 * rev_string - reverse a string in place
 * @s: input string s
 */
void rev_string(char *s)
{
	int i = 0;
	int j = _strlen(s) - 1;

	while (i < j)
	{
		s[i] ^= s[j];
		s[j] ^= s[i];
		s[i] ^= s[j];
		i++;
		j--;
	}
}
