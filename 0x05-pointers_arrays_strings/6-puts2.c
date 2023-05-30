#include "main.h"
#include <stdio.h>

/**
 * puts2 - print string str
 * @str: input string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
