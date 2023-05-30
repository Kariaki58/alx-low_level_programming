#include "main.h"

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return len;
}
/**
 * puts2 - print string str
 * @str: input string
 */
void puts2(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
