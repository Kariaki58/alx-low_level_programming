#include "main.h"
#include <string.h>

/**
 * puts_half - function to print the string by half
 * @str: input to function.
 */
void puts_half(char *str)
{
	int n;
	size_t i;

	n = (strlen(str) - 1) / 2;
	if (n % 2 == 0)
	{
		for (i = n + 1; i < strlen(str); i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
