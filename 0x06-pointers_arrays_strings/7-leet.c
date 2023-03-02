#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @str: the input string.
 * Return: result(sucess).
 */
char *leet(char *str)
{
	size_t len = strlen(str);
	char *result = (char *)malloc((len + 1) * sizeof(char));
	size_t i;

	if (result == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		char c = str[i];

		if (c == 'a' || c == 'A')
			result[i] = '4';
		else if (c == 'e' || c == 'E')
			result[i] = '3';
		else if (c == 'o' || c == 'O')
			result[i] = '0';
		else if (c == 't' || c == 'T')
			result[i] = '7';
		else if (c == 'l' || c == 'L')
			result[i] = '1';
		else
			result[i] = c;
	}
	result[len] = '\0';
	return (result);
}
