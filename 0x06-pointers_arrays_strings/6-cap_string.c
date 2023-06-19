#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * cap_string - capitalize any string you see in str
 * @str: string to be capitalize
 * Return: return capitalized str
 */
char *cap_string(char str[])
{
	char *d = ",;.!?(){}";
	unsigned int i = 1, j, data;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		data = str[i];
		data -= 32;
		str[i] = data;
	}
	while (str[i])
	{
		for (j = 0; j < strlen(d) - 1; j++)
		{
			if (str[i - 1] == d[j] || str[i - 1] == ' ' ||
			str[i - 1] == '\t' || str[i - 1] == '"' ||
			str[i - 1] == '\n')
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					data = str[i];
					data -= 32;
					str[i] = data;
				}
			}
		}
		i++;
	}
	return (str);
}
