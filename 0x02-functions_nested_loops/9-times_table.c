#include "main.h"
#include <stdio.h>

/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int i, j, mul = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mul = i * j;
			if (mul < 10)
			{
				if (j > 0)
				{
					putchar(' ');
					putchar(' ');
				}
				putchar(mul + '0');
			}
			else
			{
				putchar(' ');
				putchar((mul / 10) + '0');
				putchar((mul % 10) + '0');
			}
			if (j != 9)
				putchar(',');
		}
		putchar('\n');
	}
}
