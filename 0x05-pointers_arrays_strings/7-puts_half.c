#include "main.h"
#include <stdio.h>

/**
 * _strlen - get length of a string
 * @s: string input
 * Return: return len;
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
 * puts_half - print the second half of the string
 * @str: string
 */
void puts_half(char *str)
{
	int n;

	n = (_strlen(str) - 1) / 2;
	n++;
	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
