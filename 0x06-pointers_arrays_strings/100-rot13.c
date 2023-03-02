#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string to encode
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *str)
{
	char *p = str;
	int i, j;

	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	while (*p)
	{
		i = 0;
		while (alpha[i])
		{
			if (*p == alpha[i])
			{
				for (j = 0; j < 52; j++)
				{
					if (*p == alpha[j])
					{
						*p = rot[j];
						break;
					}
				}
				break;
			}
			i++;
		}
		p++;
	}
	return (str);
}
