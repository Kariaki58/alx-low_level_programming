#include "main.h"
#include <string.h>
/**
 * puts2 - function to take prints every other character of a string.
 * @str: input the function.
 */
void puts2(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str) - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
