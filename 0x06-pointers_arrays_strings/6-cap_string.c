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
	int len = strlen(str);
	int capitalize_next = 1;
	int i;

	for (i = 0; i < len; i++)
	{
		if (isspace(str[i]) || ispunct(str[i]))
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			str[i] = toupper(str[i]);
			capitalize_next = 0;
		}
	}
	return (str);
}
