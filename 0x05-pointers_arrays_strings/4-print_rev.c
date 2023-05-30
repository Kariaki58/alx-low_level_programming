#include "main.h"
#include <stdio.h>

/**
 * _strlen - get the length of the string s
 * @s: string s
 * Return: return length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * print_rev - print the reverse of a string
 * @s: string
 */
void print_rev(char *s)
{
	int len = _strlen(s) - 1;

	while (len > -1)
	{
		_putchar(s[len--]);
	}
	_putchar('\n');
}
