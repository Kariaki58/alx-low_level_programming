#include <stdio.h>

/**
 * print_times_table - print n times table
 * @n: number
 */
void print_times_table(int n)
{
	int i, j, mul = 0;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			mul = i * j;
			if (mul < 10 && j)
			{
				putchar(' ');
				putchar(' ');
				putchar(' ');
			}
			else if (mul > 9 && mul < 100)
			{
				putchar(' ');
				putchar(' ');
				putchar((mul / 10) + '0');
			}
			else if (mul > 99)
			{
				putchar(' ');
				putchar((mul / 100) + '0');
				putchar(((mul / 10) % 10) + '0');
			}
			putchar((mul % 10) + '0');
			if (j < n)
				putchar(',');
		}
		putchar('\n');
	}
}
