#include "main.h"

/**
 * print_times_table - check the code.
 *
 * Description: function that print multiplication table
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0){
		return;
	}
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			_putchar((i * j) + '0');
			if (j != n)
			{
				_putchar(',');
				_putchar('\t');
			}
		}
		putchar('\n');
	}
}
