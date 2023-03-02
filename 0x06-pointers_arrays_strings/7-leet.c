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
	int i, j;
	char leet_letters[] = "aAeEoOtTlL";
	char leet_digits[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_letters[j])
			{
				str[i] = leet_digits[j];
				break;
			}
		}
	}
	return (str);
}
