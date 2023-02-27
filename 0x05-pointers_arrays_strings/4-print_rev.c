#include "main.h"
#include <string.h>

/**
 * print_rev - print a string, in reverse.
 * @s: the input string
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i > -1; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
