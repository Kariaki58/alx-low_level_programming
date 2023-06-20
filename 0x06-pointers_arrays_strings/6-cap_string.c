#include "main.h"
#include <string.h>

/**
 * cap_string - capitalize string
 * @str: strings
 * Return: return str.
*/
char *cap_string(char *str)
{
	char *Sep = ",;.!?(){}";
	size_t i = 0, j, str_num;

	while (str[i])
	{
		for (j = 0; j < strlen(Sep); j++)
		{
			if (str[i - 1] == Sep[j])
			{
				str_num = str[i];
				if (str_num >= 97 && str_num <= 122)
				{
					str_num -= 32;
					str[i] = str_num;
				}
			}
		}
		if (str[i - 1] == " ")
		i++;
	}
	return (str);
}