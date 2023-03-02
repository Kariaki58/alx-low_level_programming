#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @str: The string to be capitalized.
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'
			|| str[i - 1] == '\n' || str[i - 1] == ','
			|| str[i - 1] == ';' || str[i - 1] == '.'
			|| str[i - 1] == '!' || str[i - 1] == '?'
			|| str[i - 1] == '"' || str[i - 1] == '('
			|| str[i - 1] == ')' || str[i - 1] == '{'
			|| str[i - 1] == '}')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
