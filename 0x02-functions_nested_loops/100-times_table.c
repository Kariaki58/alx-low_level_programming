#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_times_table - print times table
 * @n: int n
 */
void print_times_table(int n)
{
	int i, j, multiplier = 0;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			multiplier = i * j;
			if (j == 0)
				putchar(multiplier + '0');
			if (multiplier < 10 && j != 0)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(' ');
				putchar(multiplier + '0');
			}
			if (multiplier > 9 && multiplier < 100)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar((multiplier / 10) + '0');
				putchar((multiplier % 10) + '0');
			}
			if (multiplier > 99)
			{
				putchar(',');
				putchar(' ');
				putchar((multiplier / 100) + '0');
				putchar(((multiplier / 10) % 10) + '0');
				putchar((multiplier % 10) + '0');
			}
		}
		putchar('\n');
	}
}
