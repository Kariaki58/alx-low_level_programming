#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: input string to print
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}
