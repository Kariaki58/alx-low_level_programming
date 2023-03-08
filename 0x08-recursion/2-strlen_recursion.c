#include "main.h"

/**
 * _strlen_recursion - strlen using recursion
 * @s: input of the string
 * Return: _strlen_recursion
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
