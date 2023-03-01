#include "main.h"
#include <ctype.h>

/**
 * string_toupper - function to return uppercase of a string
 * @s: string input
 * Return: return a string in uppercase.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
