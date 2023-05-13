#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print to 98
 * @n: input number n
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i == 98)
				break;
			printf(",");
			printf(" ");
		}
		putchar('\n');
		return;
	}
	else if (n > 98)
	{
		for (i = n; i > 97; i--)
		{
			printf("%d", i);
			if (i == 98)
				break;
			printf(",");
			printf(" ");
		}
		putchar('\n');
		return;
	}
	else
		printf("%d\n", n);
}
