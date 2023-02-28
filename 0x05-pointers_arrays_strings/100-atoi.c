#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _atoi - function to print the number of a string.
 * @s: input value
 * Return: return an int.
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int ll = 0;
	int lf = 1;
	int lg = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			lf = lf * -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			lg = 1;
			ll = (ll * 10) + (s[i] - '0');
			i++;
		}
		if (lg == 1)
			break;
		i++;
	}
	ll *= lf;
	return (ll);
}
